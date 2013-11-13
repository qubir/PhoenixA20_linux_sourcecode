cmd_drivers/media/video/sun7i/cache-v7.o := arm-linux-gnueabi-gcc -Wp,-MD,drivers/media/video/sun7i/.cache-v7.o.d  -nostdinc -isystem /home/jixinhui/Projects/phoenix/lichee/out/android/common/buildroot/external-toolchain/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include -I/home/jixinhui/Projects/phoenix/lichee/linux-3.3/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /home/jixinhui/Projects/phoenix/lichee/linux-3.3/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-sun7i/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2           -c -o drivers/media/video/sun7i/cache-v7.o drivers/media/video/sun7i/cache-v7.S

source_drivers/media/video/sun7i/cache-v7.o := drivers/media/video/sun7i/cache-v7.S

deps_drivers/media/video/sun7i/cache-v7.o := \
  /home/jixinhui/Projects/phoenix/lichee/linux-3.3/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/jixinhui/Projects/phoenix/lichee/linux-3.3/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
  /home/jixinhui/Projects/phoenix/lichee/linux-3.3/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/jixinhui/Projects/phoenix/lichee/linux-3.3/arch/arm/include/asm/hwcap.h \
  /home/jixinhui/Projects/phoenix/lichee/linux-3.3/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \

drivers/media/video/sun7i/cache-v7.o: $(deps_drivers/media/video/sun7i/cache-v7.o)

$(deps_drivers/media/video/sun7i/cache-v7.o):
