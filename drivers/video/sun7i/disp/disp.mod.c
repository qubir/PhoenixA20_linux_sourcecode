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
	{ 0x92b57248, "flush_work" },
	{ 0x2c51170f, "cdev_alloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x693bc70f, "cdev_del" },
	{ 0x131c0687, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x19445bf2, "clk_reset" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x82f11a24, "clk_enable" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xcca27eeb, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x406f0613, "framebuffer_release" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x165e7f89, "clk_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8949858b, "schedule_work" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0x5f97bc7b, "device_destroy" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0x7db194ba, "clk_get_parent" },
	{ 0x999e8297, "vfree" },
	{ 0x91715312, "sprintf" },
	{ 0x6fdf9b95, "clk_get_rate" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0xcd63c845, "__aeabi_lasr" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x9ed7db91, "sysfs_create_group" },
	{ 0x9148b806, "register_framebuffer" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0xbf8ba54a, "vprintk" },
	{ 0xc8573e53, "device_create" },
	{ 0x3e273c48, "platform_device_unregister" },
	{ 0xd9605d4c, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xb14c9454, "platform_driver_register" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5cded97f, "kobject_uevent_env" },
	{ 0x7f98e274, "delay_fn" },
	{ 0x7f57cec6, "cdev_add" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0xb687a464, "platform_device_register" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x33d92fe, "clk_set_parent" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xbe0eddc1, "script_dump_mainkey" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0xae384e66, "clk_get" },
	{ 0x21c601c3, "clk_set_rate" },
	{ 0x72542c85, "__wake_up" },
	{ 0x4756dfd9, "framebuffer_alloc" },
	{ 0xfe990052, "gpio_free" },
	{ 0x61d251fd, "sunxi_mem_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x630c6ae6, "remap_pfn_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x7e74e833, "class_destroy" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb81960ca, "snprintf" },
	{ 0x32c5ddf6, "platform_driver_unregister" },
	{ 0xa15ae7ca, "__class_create" },
	{ 0x29cd7eec, "sw_gpio_setall_range" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x7fe7b03a, "standby_type" },
	{ 0x9a32035a, "sunxi_mem_alloc" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x7fd6969, "unregister_framebuffer" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E1BDD75808CA6BB6183680F");
