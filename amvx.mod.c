#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd6f5b9af, "vb2_queue_init" },
	{ 0x6b153641, "v4l2_fh_exit" },
	{ 0x8668a688, "filp_open" },
	{ 0x9dd4105e, "free_irq" },
	{ 0x44da13bc, "vscnprintf" },
	{ 0x8a2041ba, "vb2_dma_sg_memops" },
	{ 0x031a8763, "freq_qos_remove_request" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0x8fd22f8c, "video_ioctl2" },
	{ 0x1abc7887, "release_firmware" },
	{ 0x3130668f, "is_acpi_device_node" },
	{ 0xdc352a3b, "__list_add_valid_or_report" },
	{ 0x54b9496d, "vb2_streamoff" },
	{ 0x3e674086, "param_ops_uint" },
	{ 0xfaf1aa47, "vb2_queue_release" },
	{ 0xe1b0a92a, "wait_for_completion_timeout" },
	{ 0xe41dbbf4, "devm_kmalloc" },
	{ 0x534ed5f3, "__msecs_to_jiffies" },
	{ 0x9cfeb40a, "platform_driver_unregister" },
	{ 0xa6c3b74d, "ktime_get_mono_fast_ns" },
	{ 0x32feeafc, "mod_timer_pending" },
	{ 0xe90d5964, "platform_get_irq" },
	{ 0x63b58824, "seq_release" },
	{ 0xc80b7106, "vb2_poll" },
	{ 0x40a621c5, "snprintf" },
	{ 0x62cbec20, "complete" },
	{ 0x77b369bc, "dev_pm_domain_set" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xda44517b, "simple_strtol" },
	{ 0xd648ae19, "sg_free_table" },
	{ 0x9a61d530, "v4l2_fh_del" },
	{ 0xb61901c0, "dma_vunmap_noncontiguous" },
	{ 0xa728b7d3, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a645690, "__bitmap_weight" },
	{ 0xc2ccdd1e, "__init_swait_queue_head" },
	{ 0x9a61d530, "v4l2_fh_add" },
	{ 0xb730487b, "finish_wait" },
	{ 0x4ccc1f7c, "dma_unmap_page_attrs" },
	{ 0xe6b91231, "__sw_hweight32" },
	{ 0x40a621c5, "scnprintf" },
	{ 0xefeb59e5, "__pci_register_driver" },
	{ 0x8059f379, "v4l2_ctrl_handler_init_class" },
	{ 0xd5c3f38c, "up" },
	{ 0x5201f61b, "__cpu_present_mask" },
	{ 0x12ad300e, "iounmap" },
	{ 0x3239fbdb, "arm64_use_ng_mappings" },
	{ 0x3e674086, "param_array_ops" },
	{ 0x78379b76, "reset_control_assert" },
	{ 0xfbe7861b, "memcpy" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xd9ed1a7c, "vb2_dqbuf" },
	{ 0x8e3336dd, "enable_irq" },
	{ 0x22dc5452, "kset_unregister" },
	{ 0x14b1e526, "seq_lseek" },
	{ 0xa554b383, "kernel_kobj" },
	{ 0x1d1e3c95, "fwnode_get_next_child_node" },
	{ 0xd61881e5, "simple_write_to_buffer" },
	{ 0x0feb1e94, "usleep_range_state" },
	{ 0xc281f1fb, "prepare_to_wait_event" },
	{ 0x5e505530, "kthread_should_stop" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0xee285526, "__ioremap_prot" },
	{ 0xf2a40031, "log_post_write_mmio" },
	{ 0x68a1b6c6, "__wake_up" },
	{ 0xac79ddaf, "dma_buf_attach" },
	{ 0x1344ac64, "cpufreq_cpu_put" },
	{ 0x85ae7aad, "pci_unregister_driver" },
	{ 0x24db4285, "__release_region" },
	{ 0x98113ef8, "vb2_reqbufs" },
	{ 0x6f21cf6e, "wake_up_process" },
	{ 0x2cabda2b, "dev_pm_domain_attach_by_name" },
	{ 0x8e7986a2, "v4l2_ctrl_new_std_compound" },
	{ 0xf72c475d, "__pm_runtime_set_status" },
	{ 0x1f45e0f0, "dma_map_page_attrs" },
	{ 0xb06660af, "log_post_read_mmio" },
	{ 0xd8b288f3, "clk_prepare" },
	{ 0xe8213e80, "_printk" },
	{ 0x9415e55d, "irq_modify_status" },
	{ 0x77286dd5, "v4l2_ctrl_handler_setup" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "schedule" },
	{ 0x68951c3b, "acpi_subsys_runtime_resume" },
	{ 0x52ae98cd, "vb2_expbuf" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0xff0106da, "refcount_warn_saturate" },
	{ 0xf73cc38a, "video_devdata" },
	{ 0xaa47b76e, "__arch_copy_to_user" },
	{ 0xc429d7ce, "__tracepoint_rwmmio_post_read" },
	{ 0x2ff787f9, "vb2_queue_error" },
	{ 0xe8b38597, "pm_runtime_enable" },
	{ 0x30c65558, "strnlen" },
	{ 0x1e6d4ec3, "dma_buf_map_attachment" },
	{ 0xa014976f, "device_property_read_u32_array" },
	{ 0x54b9496d, "vb2_streamon" },
	{ 0x11b80914, "__free_pages" },
	{ 0x7f018c63, "strrchr" },
	{ 0xcccfa35b, "dev_pm_domain_detach" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xd70733be, "sized_strscpy" },
	{ 0x3297df59, "vb2_plane_cookie" },
	{ 0xb09bc67d, "sg_alloc_table" },
	{ 0x6c861a48, "kobject_uevent_env" },
	{ 0x55c3d3aa, "__dma_sync_single_for_cpu" },
	{ 0x7a5ffe84, "init_wait_entry" },
	{ 0xb434b206, "devm_kfree" },
	{ 0x780f04d3, "vb2_querybuf" },
	{ 0x1ffc20f7, "request_firmware_nowait" },
	{ 0xc429d7ce, "__tracepoint_rwmmio_write" },
	{ 0x9b85c6ad, "update_devfreq" },
	{ 0xbc3ff5a8, "dma_buf_unmap_attachment" },
	{ 0xd5a35df8, "dma_vmap_noncontiguous" },
	{ 0x9126ce86, "request_threaded_irq" },
	{ 0x146b9dbf, "v4l2_ctrl_new_custom" },
	{ 0x68951c3b, "acpi_subsys_runtime_suspend" },
	{ 0x4e0565c7, "kobj_sysfs_ops" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x500a5602, "platform_get_resource" },
	{ 0x17545440, "strstr" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0x78379b76, "reset_control_deassert" },
	{ 0xd7a59a65, "vmalloc_noprof" },
	{ 0x8bf21e4f, "vb2_qbuf" },
	{ 0x162a96c3, "__sg_page_iter_next" },
	{ 0xbeb1d261, "destroy_workqueue" },
	{ 0x9aa6980d, "mutex_lock" },
	{ 0x1bdf2bc8, "kimage_voffset" },
	{ 0x024e3107, "vprintk" },
	{ 0xcf691706, "dma_buf_get" },
	{ 0x0546f2f9, "debugfs_remove" },
	{ 0x7c1c5981, "strncmp" },
	{ 0x051d8ae9, "seq_putc" },
	{ 0x8a23df34, "set_normalized_timespec64" },
	{ 0xd41df557, "memstart_addr" },
	{ 0xc609ff70, "strncpy" },
	{ 0x72275104, "mutex_is_locked" },
	{ 0x3130668f, "is_acpi_data_node" },
	{ 0x91520182, "dma_buf_put" },
	{ 0x03ddee53, "vb2_buffer_done" },
	{ 0x3297df59, "vb2_plane_vaddr" },
	{ 0xf811ba68, "v4l2_ctrl_subscribe_event" },
	{ 0x93b427c4, "v4l2_fh_init" },
	{ 0x241e3370, "v4l2_event_pending" },
	{ 0x4f1e5fd0, "__list_del_entry_valid_or_report" },
	{ 0x3b6352de, "kobject_init_and_add" },
	{ 0x680628e7, "ktime_get_real_ts64" },
	{ 0x86632fd6, "_find_next_bit" },
	{ 0xb3ce3306, "video_unregister_device" },
	{ 0x2d88a3ab, "cancel_work" },
	{ 0x4dc0a726, "kthread_stop" },
	{ 0x828915a4, "v4l2_event_subscribe" },
	{ 0x7057d579, "mutex_lock_interruptible" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x0e9cab28, "memset" },
	{ 0x7740fc32, "kernel_read" },
	{ 0x62cbec20, "wait_for_completion" },
	{ 0xbc752f75, "v4l2_ctrl_new_std_menu" },
	{ 0xbeb1d261, "__flush_workqueue" },
	{ 0x9dbc7439, "debugfs_create_u32" },
	{ 0xf296206e, "nr_cpu_ids" },
	{ 0x2ecc6b55, "rtc_time64_to_tm" },
	{ 0xe804603d, "__init_waitqueue_head" },
	{ 0xc429d7ce, "__tracepoint_rwmmio_read" },
	{ 0x62cbec20, "complete_all" },
	{ 0x60f7b2dc, "v4l2_device_register" },
	{ 0x3e565e15, "strcmp" },
	{ 0x7057d579, "mutex_trylock" },
	{ 0x058c185a, "jiffies" },
	{ 0x9789298d, "__platform_driver_register" },
	{ 0xbd0b42d9, "kthread_create_on_node" },
	{ 0x90592985, "__devm_reset_control_get" },
	{ 0x96419027, "devm_clk_get_optional" },
	{ 0x181cc73a, "seq_read" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf1de9e85, "vfree" },
	{ 0xe1b43755, "kobject_del" },
	{ 0xb11b9b18, "__pm_runtime_resume" },
	{ 0x9b85c6ad, "devfreq_suspend_device" },
	{ 0x9aa6980d, "mutex_unlock" },
	{ 0x3e674086, "param_ops_bool" },
	{ 0x3311b72c, "__video_register_device" },
	{ 0x55c3d3aa, "__dma_sync_single_for_device" },
	{ 0xfd20e78b, "pm_runtime_force_resume" },
	{ 0xf571824e, "filp_close" },
	{ 0xf0154580, "__sg_page_iter_start" },
	{ 0x8fa8e101, "seq_write" },
	{ 0xec4bbdc3, "__kmalloc_cache_noprof" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0xdcfe41af, "seq_printf" },
	{ 0x7c14ae9c, "down_interruptible" },
	{ 0x5bfc26d5, "v4l2_ctrl_new_std" },
	{ 0x6037dd03, "vb2_create_bufs" },
	{ 0x98fac234, "debugfs_create_file_full" },
	{ 0x77286dd5, "v4l2_ctrl_handler_free" },
	{ 0x33d0c686, "clk_disable" },
	{ 0xc22e9953, "alloc_pages_noprof" },
	{ 0xc96cc825, "v4l2_device_unregister" },
	{ 0x8177e732, "dma_buf_detach" },
	{ 0x1688fc48, "log_read_mmio" },
	{ 0xaef1f20d, "system_unbound_wq" },
	{ 0x63b58824, "single_release" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0x9c4ed43a, "alt_cb_patch_nops" },
	{ 0xcb570010, "freq_qos_add_request" },
	{ 0x9e5145cd, "of_count_phandle_with_args" },
	{ 0x9644980c, "cpufreq_cpu_get" },
	{ 0xbc949040, "seq_open" },
	{ 0xb11b9b18, "__pm_runtime_suspend" },
	{ 0x6c5c0bab, "vb2_mmap" },
	{ 0xdf4bee3d, "alloc_workqueue_noprof" },
	{ 0xcab4bbfb, "set_primary_fwnode" },
	{ 0x2de93c9c, "__pm_runtime_use_autosuspend" },
	{ 0x2044b429, "iomem_resource" },
	{ 0x3e674086, "param_ops_int" },
	{ 0xc26ba0f9, "v4l2_event_queue_fh" },
	{ 0x31a4d1d0, "single_open" },
	{ 0x7851be11, "dynamic_might_resched" },
	{ 0xf9a24814, "__pm_runtime_disable" },
	{ 0x9b85c6ad, "devfreq_resume_device" },
	{ 0x20144aa2, "debugfs_create_dir" },
	{ 0x6dfe7518, "of_dma_configure_id" },
	{ 0xb3ce3306, "video_device_release_empty" },
	{ 0x437e81c7, "simple_read_from_buffer" },
	{ 0xd8b288f3, "clk_enable" },
	{ 0xc429d7ce, "__tracepoint_rwmmio_post_write" },
	{ 0xfd20e78b, "pm_runtime_force_suspend" },
	{ 0xf2a40031, "log_write_mmio" },
	{ 0xb11b9b18, "__pm_runtime_idle" },
	{ 0x92683fd2, "v4l2_event_unsubscribe" },
	{ 0xd6d1346c, "kobject_get" },
	{ 0x4d541b15, "kmalloc_caches" },
	{ 0x52ebbba3, "__request_region" },
	{ 0xd31ed277, "kernel_write" },
	{ 0x9aa6980d, "mutex_init_generic" },
	{ 0x8e3336dd, "disable_irq" },
	{ 0xdd1def30, "kset_create_and_add" },
	{ 0xe1b43755, "kobject_put" },
	{ 0x33d0c686, "clk_unprepare" },
	{ 0xda8b709b, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd6f5b9af,
	0x6b153641,
	0x8668a688,
	0x9dd4105e,
	0x44da13bc,
	0x8a2041ba,
	0x031a8763,
	0xa61fd7aa,
	0x8fd22f8c,
	0x1abc7887,
	0x3130668f,
	0xdc352a3b,
	0x54b9496d,
	0x3e674086,
	0xfaf1aa47,
	0xe1b0a92a,
	0xe41dbbf4,
	0x534ed5f3,
	0x9cfeb40a,
	0xa6c3b74d,
	0x32feeafc,
	0xe90d5964,
	0x63b58824,
	0xc80b7106,
	0x40a621c5,
	0x62cbec20,
	0x77b369bc,
	0x49733ad6,
	0xda44517b,
	0xd648ae19,
	0x9a61d530,
	0xb61901c0,
	0xa728b7d3,
	0x3a645690,
	0xc2ccdd1e,
	0x9a61d530,
	0xb730487b,
	0x4ccc1f7c,
	0xe6b91231,
	0x40a621c5,
	0xefeb59e5,
	0x8059f379,
	0xd5c3f38c,
	0x5201f61b,
	0x12ad300e,
	0x3239fbdb,
	0x3e674086,
	0x78379b76,
	0xfbe7861b,
	0xcb8b6ec6,
	0xd9ed1a7c,
	0x8e3336dd,
	0x22dc5452,
	0x14b1e526,
	0xa554b383,
	0x1d1e3c95,
	0xd61881e5,
	0x0feb1e94,
	0xc281f1fb,
	0x5e505530,
	0x2352b148,
	0xee285526,
	0xf2a40031,
	0x68a1b6c6,
	0xac79ddaf,
	0x1344ac64,
	0x85ae7aad,
	0x24db4285,
	0x98113ef8,
	0x6f21cf6e,
	0x2cabda2b,
	0x8e7986a2,
	0xf72c475d,
	0x1f45e0f0,
	0xb06660af,
	0xd8b288f3,
	0xe8213e80,
	0x9415e55d,
	0x77286dd5,
	0x6ac784f4,
	0xd272d446,
	0x68951c3b,
	0x52ae98cd,
	0xd272d446,
	0xff0106da,
	0xf73cc38a,
	0xaa47b76e,
	0xc429d7ce,
	0x2ff787f9,
	0xe8b38597,
	0x30c65558,
	0x1e6d4ec3,
	0xa014976f,
	0x54b9496d,
	0x11b80914,
	0x7f018c63,
	0xcccfa35b,
	0x90a48d82,
	0xd70733be,
	0x3297df59,
	0xb09bc67d,
	0x6c861a48,
	0x55c3d3aa,
	0x7a5ffe84,
	0xb434b206,
	0x780f04d3,
	0x1ffc20f7,
	0xc429d7ce,
	0x9b85c6ad,
	0xbc3ff5a8,
	0xd5a35df8,
	0x9126ce86,
	0x146b9dbf,
	0x68951c3b,
	0x4e0565c7,
	0x32feeafc,
	0x500a5602,
	0x17545440,
	0xbd03ed67,
	0x78379b76,
	0xd7a59a65,
	0x8bf21e4f,
	0x162a96c3,
	0xbeb1d261,
	0x9aa6980d,
	0x1bdf2bc8,
	0x024e3107,
	0xcf691706,
	0x0546f2f9,
	0x7c1c5981,
	0x051d8ae9,
	0x8a23df34,
	0xd41df557,
	0xc609ff70,
	0x72275104,
	0x3130668f,
	0x91520182,
	0x03ddee53,
	0x3297df59,
	0xf811ba68,
	0x93b427c4,
	0x241e3370,
	0x4f1e5fd0,
	0x3b6352de,
	0x680628e7,
	0x86632fd6,
	0xb3ce3306,
	0x2d88a3ab,
	0x4dc0a726,
	0x828915a4,
	0x7057d579,
	0xe54e0a6b,
	0x0e9cab28,
	0x7740fc32,
	0x62cbec20,
	0xbc752f75,
	0xbeb1d261,
	0x9dbc7439,
	0xf296206e,
	0x2ecc6b55,
	0xe804603d,
	0xc429d7ce,
	0x62cbec20,
	0x60f7b2dc,
	0x3e565e15,
	0x7057d579,
	0x058c185a,
	0x9789298d,
	0xbd0b42d9,
	0x90592985,
	0x96419027,
	0x181cc73a,
	0x82fd7238,
	0xf1de9e85,
	0xe1b43755,
	0xb11b9b18,
	0x9b85c6ad,
	0x9aa6980d,
	0x3e674086,
	0x3311b72c,
	0x55c3d3aa,
	0xfd20e78b,
	0xf571824e,
	0xf0154580,
	0x8fa8e101,
	0xec4bbdc3,
	0x2d88a3ab,
	0x5cb46e6d,
	0xdcfe41af,
	0x7c14ae9c,
	0x5bfc26d5,
	0x6037dd03,
	0x98fac234,
	0x77286dd5,
	0x33d0c686,
	0xc22e9953,
	0xc96cc825,
	0x8177e732,
	0x1688fc48,
	0xaef1f20d,
	0x63b58824,
	0x02f9bbf0,
	0x9c4ed43a,
	0xcb570010,
	0x9e5145cd,
	0x9644980c,
	0xbc949040,
	0xb11b9b18,
	0x6c5c0bab,
	0xdf4bee3d,
	0xcab4bbfb,
	0x2de93c9c,
	0x2044b429,
	0x3e674086,
	0xc26ba0f9,
	0x31a4d1d0,
	0x7851be11,
	0xf9a24814,
	0x9b85c6ad,
	0x20144aa2,
	0x6dfe7518,
	0xb3ce3306,
	0x437e81c7,
	0xd8b288f3,
	0xc429d7ce,
	0xfd20e78b,
	0xf2a40031,
	0xb11b9b18,
	0x92683fd2,
	0xd6d1346c,
	0x4d541b15,
	0x52ebbba3,
	0xd31ed277,
	0x9aa6980d,
	0x8e3336dd,
	0xdd1def30,
	0xe1b43755,
	0x33d0c686,
	0xda8b709b,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"vb2_queue_init\0"
	"v4l2_fh_exit\0"
	"filp_open\0"
	"free_irq\0"
	"vscnprintf\0"
	"vb2_dma_sg_memops\0"
	"freq_qos_remove_request\0"
	"__check_object_size\0"
	"video_ioctl2\0"
	"release_firmware\0"
	"is_acpi_device_node\0"
	"__list_add_valid_or_report\0"
	"vb2_streamoff\0"
	"param_ops_uint\0"
	"vb2_queue_release\0"
	"wait_for_completion_timeout\0"
	"devm_kmalloc\0"
	"__msecs_to_jiffies\0"
	"platform_driver_unregister\0"
	"ktime_get_mono_fast_ns\0"
	"mod_timer_pending\0"
	"platform_get_irq\0"
	"seq_release\0"
	"vb2_poll\0"
	"snprintf\0"
	"complete\0"
	"dev_pm_domain_set\0"
	"queue_work_on\0"
	"simple_strtol\0"
	"sg_free_table\0"
	"v4l2_fh_del\0"
	"dma_vunmap_noncontiguous\0"
	"pm_runtime_set_autosuspend_delay\0"
	"__bitmap_weight\0"
	"__init_swait_queue_head\0"
	"v4l2_fh_add\0"
	"finish_wait\0"
	"dma_unmap_page_attrs\0"
	"__sw_hweight32\0"
	"scnprintf\0"
	"__pci_register_driver\0"
	"v4l2_ctrl_handler_init_class\0"
	"up\0"
	"__cpu_present_mask\0"
	"iounmap\0"
	"arm64_use_ng_mappings\0"
	"param_array_ops\0"
	"reset_control_assert\0"
	"memcpy\0"
	"kfree\0"
	"vb2_dqbuf\0"
	"enable_irq\0"
	"kset_unregister\0"
	"seq_lseek\0"
	"kernel_kobj\0"
	"fwnode_get_next_child_node\0"
	"simple_write_to_buffer\0"
	"usleep_range_state\0"
	"prepare_to_wait_event\0"
	"kthread_should_stop\0"
	"timer_delete_sync\0"
	"__ioremap_prot\0"
	"log_post_write_mmio\0"
	"__wake_up\0"
	"dma_buf_attach\0"
	"cpufreq_cpu_put\0"
	"pci_unregister_driver\0"
	"__release_region\0"
	"vb2_reqbufs\0"
	"wake_up_process\0"
	"dev_pm_domain_attach_by_name\0"
	"v4l2_ctrl_new_std_compound\0"
	"__pm_runtime_set_status\0"
	"dma_map_page_attrs\0"
	"log_post_read_mmio\0"
	"clk_prepare\0"
	"_printk\0"
	"irq_modify_status\0"
	"v4l2_ctrl_handler_setup\0"
	"schedule_timeout\0"
	"schedule\0"
	"acpi_subsys_runtime_resume\0"
	"vb2_expbuf\0"
	"__stack_chk_fail\0"
	"refcount_warn_saturate\0"
	"video_devdata\0"
	"__arch_copy_to_user\0"
	"__tracepoint_rwmmio_post_read\0"
	"vb2_queue_error\0"
	"pm_runtime_enable\0"
	"strnlen\0"
	"dma_buf_map_attachment\0"
	"device_property_read_u32_array\0"
	"vb2_streamon\0"
	"__free_pages\0"
	"strrchr\0"
	"dev_pm_domain_detach\0"
	"__ubsan_handle_out_of_bounds\0"
	"sized_strscpy\0"
	"vb2_plane_cookie\0"
	"sg_alloc_table\0"
	"kobject_uevent_env\0"
	"__dma_sync_single_for_cpu\0"
	"init_wait_entry\0"
	"devm_kfree\0"
	"vb2_querybuf\0"
	"request_firmware_nowait\0"
	"__tracepoint_rwmmio_write\0"
	"update_devfreq\0"
	"dma_buf_unmap_attachment\0"
	"dma_vmap_noncontiguous\0"
	"request_threaded_irq\0"
	"v4l2_ctrl_new_custom\0"
	"acpi_subsys_runtime_suspend\0"
	"kobj_sysfs_ops\0"
	"mod_timer\0"
	"platform_get_resource\0"
	"strstr\0"
	"random_kmalloc_seed\0"
	"reset_control_deassert\0"
	"vmalloc_noprof\0"
	"vb2_qbuf\0"
	"__sg_page_iter_next\0"
	"destroy_workqueue\0"
	"mutex_lock\0"
	"kimage_voffset\0"
	"vprintk\0"
	"dma_buf_get\0"
	"debugfs_remove\0"
	"strncmp\0"
	"seq_putc\0"
	"set_normalized_timespec64\0"
	"memstart_addr\0"
	"strncpy\0"
	"mutex_is_locked\0"
	"is_acpi_data_node\0"
	"dma_buf_put\0"
	"vb2_buffer_done\0"
	"vb2_plane_vaddr\0"
	"v4l2_ctrl_subscribe_event\0"
	"v4l2_fh_init\0"
	"v4l2_event_pending\0"
	"__list_del_entry_valid_or_report\0"
	"kobject_init_and_add\0"
	"ktime_get_real_ts64\0"
	"_find_next_bit\0"
	"video_unregister_device\0"
	"cancel_work\0"
	"kthread_stop\0"
	"v4l2_event_subscribe\0"
	"mutex_lock_interruptible\0"
	"__fortify_panic\0"
	"memset\0"
	"kernel_read\0"
	"wait_for_completion\0"
	"v4l2_ctrl_new_std_menu\0"
	"__flush_workqueue\0"
	"debugfs_create_u32\0"
	"nr_cpu_ids\0"
	"rtc_time64_to_tm\0"
	"__init_waitqueue_head\0"
	"__tracepoint_rwmmio_read\0"
	"complete_all\0"
	"v4l2_device_register\0"
	"strcmp\0"
	"mutex_trylock\0"
	"jiffies\0"
	"__platform_driver_register\0"
	"kthread_create_on_node\0"
	"__devm_reset_control_get\0"
	"devm_clk_get_optional\0"
	"seq_read\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"vfree\0"
	"kobject_del\0"
	"__pm_runtime_resume\0"
	"devfreq_suspend_device\0"
	"mutex_unlock\0"
	"param_ops_bool\0"
	"__video_register_device\0"
	"__dma_sync_single_for_device\0"
	"pm_runtime_force_resume\0"
	"filp_close\0"
	"__sg_page_iter_start\0"
	"seq_write\0"
	"__kmalloc_cache_noprof\0"
	"cancel_work_sync\0"
	"validate_usercopy_range\0"
	"seq_printf\0"
	"down_interruptible\0"
	"v4l2_ctrl_new_std\0"
	"vb2_create_bufs\0"
	"debugfs_create_file_full\0"
	"v4l2_ctrl_handler_free\0"
	"clk_disable\0"
	"alloc_pages_noprof\0"
	"v4l2_device_unregister\0"
	"dma_buf_detach\0"
	"log_read_mmio\0"
	"system_unbound_wq\0"
	"single_release\0"
	"timer_init_key\0"
	"alt_cb_patch_nops\0"
	"freq_qos_add_request\0"
	"of_count_phandle_with_args\0"
	"cpufreq_cpu_get\0"
	"seq_open\0"
	"__pm_runtime_suspend\0"
	"vb2_mmap\0"
	"alloc_workqueue_noprof\0"
	"set_primary_fwnode\0"
	"__pm_runtime_use_autosuspend\0"
	"iomem_resource\0"
	"param_ops_int\0"
	"v4l2_event_queue_fh\0"
	"single_open\0"
	"dynamic_might_resched\0"
	"__pm_runtime_disable\0"
	"devfreq_resume_device\0"
	"debugfs_create_dir\0"
	"of_dma_configure_id\0"
	"video_device_release_empty\0"
	"simple_read_from_buffer\0"
	"clk_enable\0"
	"__tracepoint_rwmmio_post_write\0"
	"pm_runtime_force_suspend\0"
	"log_write_mmio\0"
	"__pm_runtime_idle\0"
	"v4l2_event_unsubscribe\0"
	"kobject_get\0"
	"kmalloc_caches\0"
	"__request_region\0"
	"kernel_write\0"
	"mutex_init_generic\0"
	"disable_irq\0"
	"kset_create_and_add\0"
	"kobject_put\0"
	"clk_unprepare\0"
	"module_layout\0"
;

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-dma-sg,videobuf2-common");

MODULE_ALIAS("pci:v000013B5d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:CIXH3010:*");
MODULE_ALIAS("of:N*T*Carm,mali-mve");
MODULE_ALIAS("of:N*T*Carm,mali-mveC*");
MODULE_ALIAS("of:N*T*Carm,mali-v500");
MODULE_ALIAS("of:N*T*Carm,mali-v500C*");
MODULE_ALIAS("of:N*T*Carm,mali-v550");
MODULE_ALIAS("of:N*T*Carm,mali-v550C*");
MODULE_ALIAS("of:N*T*Carm,mali-v61");
MODULE_ALIAS("of:N*T*Carm,mali-v61C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v5");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v5C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v6");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v6C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v7");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v7C*");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v8");
MODULE_ALIAS("of:N*T*CarmChina,linlon-v8C*");

MODULE_INFO(srcversion, "B75753D57409A26E87F921B");
