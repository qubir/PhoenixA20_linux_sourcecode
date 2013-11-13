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
	{ 0x2c51170f, "cdev_alloc" },
	{ 0x693bc70f, "cdev_del" },
	{ 0x131c0687, "cdev_init" },
	{ 0xfccbc0ca, "Fb_Init" },
	{ 0xaff5a98e, "audio_set_hdmi_func" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x8949858b, "schedule_work" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x91715312, "sprintf" },
	{ 0x30b1f4af, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0x6270ed8e, "kthread_stop" },
	{ 0x9ed7db91, "sysfs_create_group" },
	{ 0xc8573e53, "device_create" },
	{ 0x3e273c48, "platform_device_unregister" },
	{ 0xb14c9454, "platform_driver_register" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7f57cec6, "cdev_add" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0xb687a464, "platform_device_register" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0x4361fbf4, "switch_set_state" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x727b2c97, "wake_up_process" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e926cce, "disp_set_hdmi_func" },
	{ 0x7e74e833, "class_destroy" },
	{ 0x17c8e4c4, "switch_dev_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x32c5ddf6, "platform_driver_unregister" },
	{ 0xa15ae7ca, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=disp";


MODULE_INFO(srcversion, "B8E829F257B41A1ECBC27A4");
