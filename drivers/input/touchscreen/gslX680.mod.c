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
	{ 0x8a82c414, "ctp_free_platform_resource" },
	{ 0x7885b289, "i2c_del_driver" },
	{ 0xc96b8770, "i2c_register_driver" },
	{ 0xcaa92d89, "ctp_print_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xcbb41871, "input_event" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbd0c109f, "ctp_i2c_test" },
	{ 0xd6b80f4f, "sw_gpio_irq_request" },
	{ 0x28fd02bd, "config_info" },
	{ 0xc84de6db, "sw_gpio_eint_set_enable" },
	{ 0x1726e62, "i2c_master_recv" },
	{ 0x9006564a, "ctp_wakeup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb1a857bb, "i2c_master_send" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x2bc68984, "device_create_file" },
	{ 0xda660e67, "input_free_device" },
	{ 0xc170990, "input_register_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xcb1a71bb, "input_allocate_device" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69ef5e17, "sw_gpio_irq_free" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x81083f59, "device_init_wakeup" },
	{ 0xa2d327de, "device_remove_file" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0x5f754e5a, "memset" },
	{ 0x33543801, "queue_work" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:gslX680");

MODULE_INFO(srcversion, "F7AE8675BECD3268F4B3D04");
