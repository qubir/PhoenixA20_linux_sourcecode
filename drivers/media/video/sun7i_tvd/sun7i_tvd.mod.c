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
	{ 0x574e1611, "videobuf_mmap_free" },
	{ 0xadf42bd5, "__request_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x82f11a24, "clk_enable" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xa5cef8ad, "release_resource" },
	{ 0x4c7d5440, "videobuf_mmap_mapper" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xc3e7d5a5, "video_device_release" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x95c5623a, "v4l2_device_unregister" },
	{ 0x165e7f89, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xfa408e17, "videobuf_streamon" },
	{ 0xc7a633bf, "__video_register_device" },
	{ 0xbb08b93c, "videobuf_queue_dma_contig_init" },
	{ 0xfe7d812d, "videobuf_iolock" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xc45d65eb, "v4l2_device_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdc4f090f, "videobuf_to_dma_contig" },
	{ 0x83e75907, "video_device_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27e1a049, "printk" },
	{ 0x46a562a3, "videobuf_qbuf" },
	{ 0x3098ac15, "video_unregister_device" },
	{ 0x83d9e103, "videobuf_querybuf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x521445b, "list_del" },
	{ 0xa6faffdd, "platform_get_resource" },
	{ 0x86b20ced, "videobuf_read_stream" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xb14c9454, "platform_driver_register" },
	{ 0xd73e42a8, "videobuf_stop" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0xb687a464, "platform_device_register" },
	{ 0x2295d81b, "video_devdata" },
	{ 0x33d92fe, "clk_set_parent" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xae7d6686, "videobuf_dqbuf" },
	{ 0xae384e66, "clk_get" },
	{ 0x21c601c3, "clk_set_rate" },
	{ 0x72542c85, "__wake_up" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x91289fd2, "videobuf_reqbufs" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x32c5ddf6, "platform_driver_unregister" },
	{ 0xf7761b8c, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x394a6b73, "video_ioctl2" },
	{ 0xcee1b2e, "videobuf_poll_stream" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x10b7d272, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf-dma-contig";


MODULE_INFO(srcversion, "CA194431899DC87115C6773");
