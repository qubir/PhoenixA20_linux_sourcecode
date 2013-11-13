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
	{ 0xf9a482f9, "msleep" },
	{ 0x82f11a24, "clk_enable" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x1258d9d9, "regulator_disable" },
	{ 0x165e7f89, "clk_disable" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5296b7b5, "device_register" },
	{ 0x27e1a049, "printk" },
	{ 0x7f98e274, "delay_fn" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0x33d92fe, "clk_set_parent" },
	{ 0xae384e66, "clk_get" },
	{ 0x21c601c3, "clk_set_rate" },
	{ 0xfe990052, "gpio_free" },
	{ 0x9d669763, "memcpy" },
	{ 0x30012968, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x52dd431f, "regulator_get" },
	{ 0x41200933, "i2c_get_adapter" },
	{ 0x29cd7eec, "sw_gpio_setall_range" },
	{ 0x8a5c7a80, "regulator_enable" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A99B4C06D2A1CB26C58A611");
