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
	{ 0x54211fad, "hid_unregister_driver" },
	{ 0xdffd8dcc, "__hid_register_driver" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x3d9a2638, "hid_input_report" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xd5f7ed25, "hid_add_device" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7df1d4b3, "hid_allocate_device" },
	{ 0x8949858b, "schedule_work" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x1e4df19d, "usbhid_submit_report" },
	{ 0x49137627, "hid_output_report" },
	{ 0x8db506c9, "hid_set_field" },
	{ 0xdfeddebb, "dev_warn" },
	{ 0xfcaebf4c, "hidinput_find_field" },
	{ 0xd04b38f9, "hid_parse_report" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x925ce83a, "hid_connect" },
	{ 0x5495392, "hid_debug" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x3581e018, "hid_destroy_device" },
	{ 0xe64d8100, "hid_disconnect" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x27e1a049, "printk" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x1a03a7f4, "dev_err" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003v0000046Dp0000C532");

MODULE_INFO(srcversion, "51477408DF73B9707E4A0DC");
