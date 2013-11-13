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
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x33543801, "queue_work" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x37a0cba, "kfree" },
	{ 0x9006564a, "ctp_wakeup" },
	{ 0xf6e7c54c, "filp_close" },
	{ 0xea4da714, "filp_open" },
	{ 0x91715312, "sprintf" },
	{ 0x9f984513, "strrchr" },
	{ 0x349cba85, "strchr" },
	{ 0x84b183ae, "strncmp" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d8668d8, "i2c_smbus_read_byte_data" },
	{ 0x97255bdf, "strlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdd4fb86f, "i2c_transfer" },
	{ 0x41200933, "i2c_get_adapter" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x27e1a049, "printk" },
	{ 0xbc601ad6, "script_get_item" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "175CF0D195BA291C30BBBF4");
