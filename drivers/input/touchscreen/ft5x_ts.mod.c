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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7885b289, "i2c_del_driver" },
	{ 0xc96b8770, "i2c_register_driver" },
	{ 0x7e74e833, "class_destroy" },
	{ 0xa15ae7ca, "__class_create" },
	{ 0x4703acf6, "__register_chrdev" },
	{ 0xcaa92d89, "ctp_print_info" },
	{ 0xb1a857bb, "i2c_master_send" },
	{ 0x1726e62, "i2c_master_recv" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x8a82c414, "ctp_free_platform_resource" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x5f97bc7b, "device_destroy" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9d8668d8, "i2c_smbus_read_byte_data" },
	{ 0xb81960ca, "snprintf" },
	{ 0x41200933, "i2c_get_adapter" },
	{ 0xbcb22002, "i2c_put_adapter" },
	{ 0xcbb41871, "input_event" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0x5f754e5a, "memset" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x37a0cba, "kfree" },
	{ 0xda660e67, "input_free_device" },
	{ 0xc8573e53, "device_create" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x343a1a8, "__list_add" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xe85d4cb5, "ctp_set_int_port_deb" },
	{ 0xf9e65190, "ctp_set_int_port_rate" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x69ef5e17, "sw_gpio_irq_free" },
	{ 0xd6b80f4f, "sw_gpio_irq_request" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0xc170990, "input_register_device" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0xcb1a71bb, "input_allocate_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x28fd02bd, "config_info" },
	{ 0x72edf3a, "standby_level" },
	{ 0xc84de6db, "sw_gpio_eint_set_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9006564a, "ctp_wakeup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x33543801, "queue_work" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ft5x_ts");

MODULE_INFO(srcversion, "CF87BFBFE5C58F2D9A9052C");
