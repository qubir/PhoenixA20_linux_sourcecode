#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x708a9a2b, "module_layout" },
	{ 0xdbb20bf6, "up_read" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xe929454c, "__wake_up_sync" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x343a1a8, "__list_add" },
	{ 0xdbacc67c, "down_read" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x521445b, "list_del" },
	{ 0x1000e51, "schedule" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x72542c85, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2FA4AC81C7933EB6A910B76");
