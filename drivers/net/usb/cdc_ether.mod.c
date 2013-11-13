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
	{ 0x35e3822c, "netdev_info" },
	{ 0x42072d5c, "usbnet_resume" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xe5709319, "usbnet_probe" },
	{ 0xfd70821b, "netif_carrier_on" },
	{ 0xd7f28aad, "usbnet_disconnect" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xee8d41e6, "netif_carrier_off" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x6ee63b75, "usb_deregister" },
	{ 0x71c90087, "memcmp" },
	{ 0xc6cb19c8, "usbnet_get_endpoints" },
	{ 0xe5e0fd00, "usb_driver_claim_interface" },
	{ 0x2221cda3, "usbnet_suspend" },
	{ 0x5bb2e317, "_dev_info" },
	{ 0x7da8f378, "usbnet_get_ethernet_addr" },
	{ 0x282ca754, "usb_driver_release_interface" },
	{ 0x17c46e95, "netdev_err" },
	{ 0xb81a6ca9, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5d17b483, "usb_ifnum_to_if" },
	{ 0x676bbc0f, "_set_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc06ip00*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Aip00*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc06ipFF*");

MODULE_INFO(srcversion, "830ED3173194340782054D6");
