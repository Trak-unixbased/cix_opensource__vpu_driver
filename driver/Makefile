ccflags-y += -I$(src)/if
ROOT_DIR := $(M)
ROOT_DIR := $(M)
ccflags-y += -I$(ROOT_DIR) -I$(ROOT_DIR)/if

all: mono_v4l2

mono_v4l2:
	@env CONFIG_VIDEO_LINLON=m CONFIG_VIDEO_LINLON_MONO=y CONFIG_VIDEO_LINLON_IF_V4L2=y $(MAKE) -C $(KDIR) M=$(CURDIR) modules

clean:
	@rm -rf *.ko
	@find . -type f -name '*.o' -delete
	@rm -rf *.mod.c
	@rm -f Module.symvers
	@rm -f modules.order
