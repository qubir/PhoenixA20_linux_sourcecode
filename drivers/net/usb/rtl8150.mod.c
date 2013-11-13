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
	{ 0xc0c4f5df, "ethtool_op_get_link" },
	{ 0x5b7c84d4, "eth_change_mtu" },
	{ 0xc784168c, "eth_validate_addr" },
	{ 0x6ee63b75, "usb_deregister" },
	{ 0xb81a6ca9, "usb_register_driver" },
	{ 0xc212a112, "_raw_spin_unlock_irq" },
	{ 0xd59daefe, "_raw_spin_lock_irq" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x9603d746, "register_netdev" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x37cdbd6b, "alloc_etherdev_mqs" },
	{ 0x450b8be5, "dev_alloc_skb" },
	{ 0x73fb44f7, "__netif_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x9d192f08, "dev_kfree_skb_irq" },
	{ 0x7d11c268, "jiffies" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9d669763, "memcpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x26224084, "usb_unlink_urb" },
	{ 0x1f257653, "usb_control_msg" },
	{ 0xb81960ca, "snprintf" },
	{ 0x328a05f1, "strncpy" },
	{ 0xadb08696, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x37fd2c14, "consume_skb" },
	{ 0xae4bb33a, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0x9a3e196a, "usb_kill_urb" },
	{ 0x688f1727, "netif_device_attach" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x27e1a049, "printk" },
	{ 0xfd70821b, "netif_carrier_on" },
	{ 0xee8d41e6, "netif_carrier_off" },
	{ 0x5bb2e317, "_dev_info" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1381041b, "netif_device_detach" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x445be466, "netif_rx" },
	{ 0x7f91a9da, "eth_type_trans" },
	{ 0x1f6ecbcb, "skb_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdfeddebb, "dev_warn" },
	{ 0x6128b5fc, "__printk_ratelimit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "D5ED57BEB0FDE7B5715F6DF");
