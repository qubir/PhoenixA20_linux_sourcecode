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
	{ 0x42072d5c, "usbnet_resume" },
	{ 0x2221cda3, "usbnet_suspend" },
	{ 0xd7f28aad, "usbnet_disconnect" },
	{ 0xe5709319, "usbnet_probe" },
	{ 0x64264bbd, "eth_mac_addr" },
	{ 0xb5fa1fa8, "usbnet_nway_reset" },
	{ 0x51305010, "usbnet_set_msglevel" },
	{ 0xba4dc0db, "usbnet_get_msglevel" },
	{ 0x4b4a35a6, "usbnet_set_settings" },
	{ 0xaad13c6d, "usbnet_get_settings" },
	{ 0x4cfc8789, "usbnet_tx_timeout" },
	{ 0xe19e105d, "usbnet_change_mtu" },
	{ 0xc784168c, "eth_validate_addr" },
	{ 0xa72e7cbf, "usbnet_start_xmit" },
	{ 0xb3bfc117, "usbnet_stop" },
	{ 0xc5f87676, "usbnet_open" },
	{ 0x6ee63b75, "usb_deregister" },
	{ 0xb81a6ca9, "usb_register_driver" },
	{ 0xfaf98462, "bitrev32" },
	{ 0xa34f1ef5, "crc32_le" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0xee8d41e6, "netif_carrier_off" },
	{ 0x1ec42c07, "usbnet_defer_kevent" },
	{ 0xfd70821b, "netif_carrier_on" },
	{ 0x2874cfb4, "usbnet_unlink_rx_urbs" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xef59d79e, "skb_pull" },
	{ 0xe7333c3c, "usbnet_skb_return" },
	{ 0x6f3faddf, "skb_clone" },
	{ 0x1f6ecbcb, "skb_put" },
	{ 0xd18a86ba, "skb_push" },
	{ 0xed91bf6f, "dev_kfree_skb_any" },
	{ 0x71ab5b04, "skb_copy_expand" },
	{ 0x99bb8806, "memmove" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0x27e1a049, "printk" },
	{ 0xe2221ff3, "generic_mii_ioctl" },
	{ 0x328a05f1, "strncpy" },
	{ 0xbeb36ef9, "usbnet_get_drvinfo" },
	{ 0x7e3540ff, "mii_link_ok" },
	{ 0xc6cb19c8, "usbnet_get_endpoints" },
	{ 0x7f98e274, "delay_fn" },
	{ 0x25522dfa, "mii_nway_restart" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x710488c6, "mii_ethtool_gset" },
	{ 0xa1bf85af, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0x17c46e95, "netdev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f257653, "usb_control_msg" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "18E622573392D2203826678");
