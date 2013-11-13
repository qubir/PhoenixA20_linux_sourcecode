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
	{ 0x161fc173, "ahci_sdev_attrs" },
	{ 0x662517bf, "ahci_shost_attrs" },
	{ 0x63205de1, "ata_scsi_unlock_native_capacity" },
	{ 0x461b78cd, "ata_std_bios_param" },
	{ 0xd32fe193, "ata_scsi_change_queue_depth" },
	{ 0x94a68723, "ata_scsi_slave_destroy" },
	{ 0x69e9a2cb, "ata_scsi_slave_config" },
	{ 0xdbca43af, "ata_scsi_queuecmd" },
	{ 0x4b44aad1, "ata_scsi_ioctl" },
	{ 0x32c5ddf6, "platform_driver_unregister" },
	{ 0x5b3834e7, "platform_driver_probe" },
	{ 0xb687a464, "platform_device_register" },
	{ 0x5eacba1f, "ahci_interrupt" },
	{ 0x388f37b4, "ata_dummy_port_ops" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x12b94373, "ahci_ops" },
	{ 0xfaf49b6e, "ata_host_activate" },
	{ 0xf8cda97c, "ahci_print_info" },
	{ 0xde21ca3c, "ahci_init_controller" },
	{ 0x14688a22, "ahci_reset_controller" },
	{ 0x1a0a417a, "ata_port_desc" },
	{ 0xbfc646ae, "ahci_reset_em" },
	{ 0xca6eb8cc, "ata_host_alloc_pinfo" },
	{ 0xbf6352cd, "ahci_set_em_messages" },
	{ 0xcdbc145d, "ahci_save_initial_config" },
	{ 0x53176a10, "devm_ioremap" },
	{ 0x3e8facfd, "devm_kzalloc" },
	{ 0xfa41163a, "platform_get_irq" },
	{ 0xa6faffdd, "platform_get_resource" },
	{ 0x5f754e5a, "memset" },
	{ 0x788986df, "ata_host_detach" },
	{ 0x165e7f89, "clk_disable" },
	{ 0x7b0677cf, "ahci_hardware_recover_for_controller_resume" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xfe990052, "gpio_free" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x8699da5b, "sw_gpio_setcfg" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x27e1a049, "printk" },
	{ 0x82f11a24, "clk_enable" },
	{ 0xae384e66, "clk_get" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0xbc601ad6, "script_get_item" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3FCC54DB48B78C4304AA80E");
