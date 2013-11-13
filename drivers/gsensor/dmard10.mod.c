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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7885b289, "i2c_del_driver" },
	{ 0xc96b8770, "i2c_register_driver" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xc170990, "input_register_device" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcb1a71bb, "input_allocate_device" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x9ed7db91, "sysfs_create_group" },
	{ 0xcbb41871, "input_event" },
	{ 0x42224298, "sscanf" },
	{ 0xf6e7c54c, "filp_close" },
	{ 0xea4da714, "filp_open" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xbd0c109f, "ctp_i2c_test" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x27e1a049, "printk" },
	{ 0x91715312, "sprintf" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0xda660e67, "input_free_device" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0xa734fe7c, "sysfs_remove_group" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:dmard10");

MODULE_INFO(srcversion, "549C81E39BA809349353E87");
