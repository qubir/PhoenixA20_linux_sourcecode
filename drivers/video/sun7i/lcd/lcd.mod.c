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
	{ 0x2c51170f, "cdev_alloc" },
	{ 0x693bc70f, "cdev_del" },
	{ 0x131c0687, "cdev_init" },
	{ 0xfccbc0ca, "Fb_Init" },
	{ 0x74441275, "DRV_DISP_Init" },
	{ 0xa1f7f10e, "TCON_open" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x94d8ce14, "LCD_GPIO_write" },
	{ 0x2c7eec7a, "LCD_PWM_EN" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x34f2663, "TCON_close" },
	{ 0x3de26fa5, "LCD_BL_EN" },
	{ 0x5f97bc7b, "device_destroy" },
	{ 0x47ea1cba, "LCD_CLOSE_FUNC" },
	{ 0xb9aaae9, "LCD_POWER_EN" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfc7a80b8, "LCD_OPEN_FUNC" },
	{ 0x27e1a049, "printk" },
	{ 0xc8573e53, "device_create" },
	{ 0xf8a05cff, "lcd_get_panel_para" },
	{ 0xbfea1050, "LCD_set_panel_funs" },
	{ 0x7f57cec6, "cdev_add" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x75e8222f, "LCD_delay_ms" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf3db47d, "LCD_delay_us" },
	{ 0x7e74e833, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa15ae7ca, "__class_create" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=disp";


MODULE_INFO(srcversion, "8E1AA2ACDC10A502F45F394");
