#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x708a9a2b, "module_layout" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdbb20bf6, "up_read" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0xa6738cca, "videobuf_queue_cancel" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0xdbacc67c, "down_read" },
	{ 0xb52ef4a7, "follow_pfn" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0xcf88ce55, "dma_alloc_coherent" },
	{ 0x93de87d3, "find_vma" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x61d251fd, "sunxi_mem_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x630c6ae6, "remap_pfn_range" },
	{ 0x3254fc87, "videobuf_queue_core_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9a32035a, "sunxi_mem_alloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core";


MODULE_INFO(srcversion, "0D7FB6B363F12864F4915F4");
