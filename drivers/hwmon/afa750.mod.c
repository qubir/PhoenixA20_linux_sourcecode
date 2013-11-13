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
	{ 0x7885b289, "i2c_del_driver" },
	{ 0xc96b8770, "i2c_register_driver" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xcbb41871, "input_event" },
	{ 0x34e9aa2d, "i2c_smbus_read_i2c_block_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x9d8668d8, "i2c_smbus_read_byte_data" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x9ed7db91, "sysfs_create_group" },
	{ 0xd07d4d11, "input_register_polled_device" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0x1b09e513, "input_allocate_polled_device" },
	{ 0x5bb2e317, "_dev_info" },
	{ 0x508dd7b4, "hwmon_device_register" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x4864bf13, "input_free_polled_device" },
	{ 0xac01e9d4, "input_unregister_polled_device" },
	{ 0xa734fe7c, "sysfs_remove_group" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x1faa9312, "hwmon_device_unregister" },
	{ 0x91715312, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:afa750");

MODULE_INFO(srcversion, "41A6BBC4441B83F424494D2");
