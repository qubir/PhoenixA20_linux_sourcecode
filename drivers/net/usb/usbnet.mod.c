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
	{ 0x710488c6, "mii_ethtool_gset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe3258fd0, "usb_get_from_anchor" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8949858b, "schedule_work" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xee8d41e6, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x9a3e196a, "usb_kill_urb" },
	{ 0x132a7a5b, "init_timer_key" },
	{ 0x78ca8003, "usb_get_urb" },
	{ 0x26224084, "usb_unlink_urb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb4275c0a, "__netdev_alloc_skb" },
	{ 0x445be466, "netif_rx" },
	{ 0x4467122a, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x6f0036d9, "del_timer_sync" },
	{ 0xe0489323, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x22e8ad17, "usb_string" },
	{ 0x25522dfa, "mii_nway_restart" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc0c4f5df, "ethtool_op_get_link" },
	{ 0x1fe9caf3, "usb_set_interface" },
	{ 0xadb08696, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x9603d746, "register_netdev" },
	{ 0xc212a112, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc8fd727e, "mod_timer" },
	{ 0xed91bf6f, "dev_kfree_skb_any" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xb17fa776, "skb_queue_tail" },
	{ 0x688f1727, "netif_device_attach" },
	{ 0x1f062711, "usb_submit_urb" },
	{ 0x1381041b, "netif_device_detach" },
	{ 0x64b56405, "usb_get_dev" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x63d9134c, "usb_put_dev" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xb7f617e2, "usb_clear_halt" },
	{ 0xd59daefe, "_raw_spin_lock_irq" },
	{ 0x7f91a9da, "eth_type_trans" },
	{ 0x17c46e95, "netdev_err" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x72542c85, "__wake_up" },
	{ 0xc784168c, "eth_validate_addr" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x3091b179, "skb_dequeue" },
	{ 0xae4bb33a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7e3540ff, "mii_link_ok" },
	{ 0x73fb44f7, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x37fd2c14, "consume_skb" },
	{ 0xaa076b9f, "skb_tstamp_tx" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1f6ecbcb, "skb_put" },
	{ 0x64264bbd, "eth_mac_addr" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x35cba3f, "usb_free_urb" },
	{ 0x25c7db68, "mii_ethtool_sset" },
	{ 0x61400378, "usb_anchor_urb" },
	{ 0x1630c7d5, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37cdbd6b, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6DCDFF257691B10021C2470");
