# Makefile for generated QEMU device stubs
# Generated from SVD file: CMSDK_CM3.svd
#
# This Makefile compiles the generated C stubs using the provided
# QEMU stub headers for testing without full QEMU dependency.

CC ?= gcc
CFLAGS ?= -Wall -Wextra -std=c11 -O2
INCLUDES = -I.

# Generated source files
SOURCES = TIMER0_qemu_stub.c TIMER1_qemu_stub.c DUALTIMER_qemu_stub.c UART0_qemu_stub.c UART1_qemu_stub.c UART2_qemu_stub.c UART3_qemu_stub.c UART4_qemu_stub.c GPIO0_qemu_stub.c GPIO1_qemu_stub.c SPI_qemu_stub.c WDT_qemu_stub.c FPGAIO_qemu_stub.c SCC_qemu_stub.c 

OBJECTS = $(SOURCES:.c=.o)

.PHONY: all clean check

all: $(OBJECTS)
	@echo "Compiled $(words $(OBJECTS)) device stub object files"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

check: all
	@echo "Build successful - all stubs compile correctly"

clean:
	rm -f $(OBJECTS)

# Dependencies (simplified - all stubs depend on headers)
$(OBJECTS): CMSDK_CM3.h svd_reg_macros.h

TIMER0_qemu_stub.o: TIMER0_regs.h TIMER0_qemu_stub.h

TIMER1_qemu_stub.o: TIMER1_regs.h TIMER1_qemu_stub.h

DUALTIMER_qemu_stub.o: DUALTIMER_regs.h DUALTIMER_qemu_stub.h

UART0_qemu_stub.o: UART0_regs.h UART0_qemu_stub.h

UART1_qemu_stub.o: UART1_regs.h UART1_qemu_stub.h

UART2_qemu_stub.o: UART2_regs.h UART2_qemu_stub.h

UART3_qemu_stub.o: UART3_regs.h UART3_qemu_stub.h

UART4_qemu_stub.o: UART4_regs.h UART4_qemu_stub.h

GPIO0_qemu_stub.o: GPIO0_regs.h GPIO0_qemu_stub.h

GPIO1_qemu_stub.o: GPIO1_regs.h GPIO1_qemu_stub.h

SPI_qemu_stub.o: SPI_regs.h SPI_qemu_stub.h

WDT_qemu_stub.o: WDT_regs.h WDT_qemu_stub.h

FPGAIO_qemu_stub.o: FPGAIO_regs.h FPGAIO_qemu_stub.h

SCC_qemu_stub.o: SCC_regs.h SCC_qemu_stub.h
