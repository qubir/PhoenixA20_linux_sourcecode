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
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x9a3e196a, "usb_kill_urb" },
	{ 0xc7a633bf, "__video_register_device" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x9a1354b3, "mutex_lock_interruptible" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3098ac15, "video_unregister_device" },
	{ 0x1fe9caf3, "usb_set_interface" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2207726e, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6a50dd1a, "vm_insert_page" },
	{ 0xb064bf5, "module_put" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x2295d81b, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xc170990, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xb7f617e2, "usb_clear_halt" },
	{ 0xda660e67, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5d17b483, "usb_ifnum_to_if" },
	{ 0xb81960ca, "snprintf" },
	{ 0x705df01d, "vmalloc_to_page" },
	{ 0xf0f1538a, "usb_alloc_coherent" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0x394a6b73, "video_ioctl2" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0xcb1a71bb, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFBCF4BD2374601FE6CCFCE");
