# SPDX-License-Identifier: GPL-2.0
#
# Construction hors arbre du pilote VPU Linlon (amvx) pour CIX.
#
# Les chemins d'objets sont relatifs au répertoire du module, SANS préfixe
# « ./ » : Kbuild compare ces noms à ceux des cibles qu'il compile
# (driver/xxx.o) pour savoir quels objets font partie du module. Avec un
# préfixe « ./ », aucun objet n'était reconnu : ils étaient compilés sans
# -DMODULE, et modpost ne trouvait ni MODULE_LICENSE ni MODULE_IMPORT_NS.

MODULE_NAME := amvx

ccflags-y += -I$(src)/driver \
	     -I$(src)/driver/dev \
	     -I$(src)/driver/if \
	     -I$(src)/driver/if/v4l2 \
	     -I$(src)/driver/linux \
	     -I$(src)/driver/external

# Add objects for if module.
if-y := driver/if/mvx_if.o \
	driver/if/mvx_buffer.o \
	driver/if/mvx_firmware_cache.o \
	driver/if/mvx_firmware.o \
	driver/if/mvx_firmware_v2.o \
	driver/if/mvx_firmware_v3.o \
	driver/if/mvx_mmu.o \
	driver/if/mvx_secure.o \
	driver/if/mvx_session.o

# Add external interface.
if-y += driver/if/v4l2/mvx_ext_v4l2.o \
	driver/if/v4l2/mvx_v4l2_buffer.o \
	driver/if/v4l2/mvx_v4l2_session.o \
	driver/if/v4l2/mvx_v4l2_vidioc.o \
	driver/if/v4l2/mvx_v4l2_fops.o \
	driver/if/v4l2/mvx_v4l2_ctrls.o

# Add objects for dev module.
dev-y := driver/dev/mvx_dev.o \
	 driver/dev/mvx_hwreg.o \
	 driver/dev/mvx_hwreg_v500.o \
	 driver/dev/mvx_hwreg_v550.o \
	 driver/dev/mvx_hwreg_v61.o \
	 driver/dev/mvx_hwreg_v52_v76.o \
	 driver/dev/mvx_lsid.o \
	 driver/dev/mvx_scheduler.o \
	 driver/mvx_pm_runtime.o

ifneq ($(KERNELRELEASE),)

obj-m := $(MODULE_NAME).o
$(MODULE_NAME)-y := driver/mvx_driver.o \
		    driver/mvx_seq.o \
		    driver/mvx_log.o \
		    driver/mvx_log_group.o \
		    $(if-y) $(dev-y)

else

COMPASS_DRV_BTENVAR_KPATH ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(COMPASS_DRV_BTENVAR_KPATH) M=$(PWD) modules

clean:
	$(MAKE) -C $(COMPASS_DRV_BTENVAR_KPATH) M=$(PWD) clean

.PHONY: all clean

endif
