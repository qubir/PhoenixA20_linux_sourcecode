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
	{ 0xe914e41e, "strcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x9ed7db91, "sysfs_create_group" },
	{ 0xc170990, "input_register_device" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0x88c34ad7, "input_set_capability" },
	{ 0xcb1a71bb, "input_allocate_device" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xda660e67, "input_free_device" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0xa734fe7c, "sysfs_remove_group" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0x7fe7b03a, "standby_type" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x8b67f1a4, "i2c_smbus_write_byte_data" },
	{ 0x9d8668d8, "i2c_smbus_read_byte_data" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:bma250");

MODULE_INFO(srcversion, "B49CD9F9BCAE5168E11AC4F");
