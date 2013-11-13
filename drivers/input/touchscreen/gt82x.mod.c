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
	{ 0x72edf3a, "standby_level" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xcbb41871, "input_event" },
	{ 0x5f754e5a, "memset" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0xe85d4cb5, "ctp_set_int_port_deb" },
	{ 0xf9e65190, "ctp_set_int_port_rate" },
	{ 0xd6b80f4f, "sw_gpio_irq_request" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0xc170990, "input_register_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0xcb1a71bb, "input_allocate_device" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xda660e67, "input_free_device" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69ef5e17, "sw_gpio_irq_free" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x9006564a, "ctp_wakeup" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x28fd02bd, "config_info" },
	{ 0xc84de6db, "sw_gpio_eint_set_enable" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x33543801, "queue_work" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "519D3E0B4D8F42684573DD1");
