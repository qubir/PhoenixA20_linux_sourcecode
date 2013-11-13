#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x708a9a2b, "module_layout" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xc3e7d5a5, "video_device_release" },
	{ 0xf99cfa35, "video_usercopy" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x52760ca9, "getnstimeofday" },
	{ 0x95c5623a, "v4l2_device_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x76cf47f6, "__aeabi_llsl" },
	{ 0x9a3e196a, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xc7a633bf, "__video_register_device" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x343a1a8, "__list_add" },
	{ 0xc45d65eb, "v4l2_device_register" },
	{ 0xcbb41871, "input_event" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x22e8ad17, "usb_string" },
	{ 0x83e75907, "video_device_alloc" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x6ee63b75, "usb_deregister" },
	{ 0x9a1354b3, "mutex_lock_interruptible" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x3098ac15, "video_unregister_device" },
	{ 0x1fe9caf3, "usb_set_interface" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x1f257653, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe5e0fd00, "usb_driver_claim_interface" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x521445b, "list_del" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2207726e, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6a50dd1a, "vm_insert_page" },
	{ 0x5ebefe4b, "v4l_printk_ioctl" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x64b56405, "usb_get_dev" },
	{ 0x2295d81b, "video_devdata" },
	{ 0xc170990, "input_register_device" },
	{ 0x63d9134c, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x282ca754, "usb_driver_release_interface" },
	{ 0xda660e67, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x25e65646, "usb_get_intf" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xefdd5a63, "ktime_get_ts" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xc1d70efb, "usb_match_one_id" },
	{ 0xb81a6ca9, "usb_register_driver" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5d17b483, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x705df01d, "vmalloc_to_page" },
	{ 0xf0f1538a, "usb_alloc_coherent" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0x7c727d7d, "usb_put_intf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcb1a71bb, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00*");

MODULE_INFO(srcversion, "EA21DCDF3397A504A105E87");
