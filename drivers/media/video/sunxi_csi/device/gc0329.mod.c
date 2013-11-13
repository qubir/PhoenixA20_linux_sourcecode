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
	{ 0x7885b289, "i2c_del_driver" },
	{ 0xc96b8770, "i2c_register_driver" },
	{ 0x773aa9a6, "i2c_unlock_adapter" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0x165e7f89, "clk_disable" },
	{ 0x82f11a24, "clk_enable" },
	{ 0x836032f1, "i2c_lock_adapter" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xa79b8b1b, "v4l2_i2c_subdev_init" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0xc4a12c7b, "v4l2_chip_ident_i2c_client" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x791ab099, "v4l2_ctrl_query_fill" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x7f98e274, "delay_fn" },
	{ 0x27e1a049, "printk" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0x6996703f, "v4l2_device_unregister_subdev" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:gc0329");

MODULE_INFO(srcversion, "C77029866A067B0CE3D658B");
