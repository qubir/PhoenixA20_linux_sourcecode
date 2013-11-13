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
	{ 0x2221cda3, "usbnet_suspend" },
	{ 0xd7f28aad, "usbnet_disconnect" },
	{ 0xe5709319, "usbnet_probe" },
	{ 0x4cfc8789, "usbnet_tx_timeout" },
	{ 0xe19e105d, "usbnet_change_mtu" },
	{ 0xc784168c, "eth_validate_addr" },
	{ 0xa72e7cbf, "usbnet_start_xmit" },
	{ 0xb3bfc117, "usbnet_stop" },
	{ 0xc5f87676, "usbnet_open" },
	{ 0x987c3029, "usbnet_get_link" },
	{ 0xb5fa1fa8, "usbnet_nway_reset" },
	{ 0x51305010, "usbnet_set_msglevel" },
	{ 0xba4dc0db, "usbnet_get_msglevel" },
	{ 0x4b4a35a6, "usbnet_set_settings" },
	{ 0xaad13c6d, "usbnet_get_settings" },
	{ 0x6ee63b75, "usb_deregister" },
	{ 0xb81a6ca9, "usb_register_driver" },
	{ 0x42072d5c, "usbnet_resume" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0xc6cb19c8, "usbnet_get_endpoints" },
	{ 0xdfeddebb, "dev_warn" },
	{ 0x5bb2e317, "_dev_info" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd28a7e05, "skb_trim" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0xbeb36ef9, "usbnet_get_drvinfo" },
	{ 0x27e1a049, "printk" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f257653, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2221ff3, "generic_mii_ioctl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "B40F2EDB122F0A058A2B72F");
