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
	{ 0x3e273c48, "platform_device_unregister" },
	{ 0x32c5ddf6, "platform_driver_unregister" },
	{ 0xb14c9454, "platform_driver_register" },
	{ 0xb687a464, "platform_device_register" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xc8fd727e, "mod_timer" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x25890512, "_raw_spin_trylock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcca27eeb, "del_timer" },
	{ 0xcbb41871, "input_event" },
	{ 0x7f98e274, "delay_fn" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x53614269, "get_cpu_idle_time_us" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x37e74642, "get_jiffies_64" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7d11c268, "jiffies" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0xc170990, "input_register_device" },
	{ 0xa6faffdd, "platform_get_resource" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0x9a72feeb, "input_set_abs_params" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcb1a71bb, "input_allocate_device" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0xfa41163a, "platform_get_irq" },
	{ 0x7fe7b03a, "standby_type" },
	{ 0x27e1a049, "printk" },
	{ 0x70411a66, "input_unregister_device" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x6f0036d9, "del_timer_sync" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xda660e67, "input_free_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "82749F6ACA809641B64EAB2");
