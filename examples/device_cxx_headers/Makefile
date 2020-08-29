# ARM GNU Toolchain
# https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads
# Assumes toolchain is in PATH

CROSS_COMPILE=arm-none-eabi-
CXX=${CROSS_COMPILE}g++
CPPFLAGS=-I../../cxx_mmio_interface/include/
CXXFLAGS=-mcpu=cortex-m3 -g -O2 -std=c++17
LDFLAGS=-nostartfiles

all : test_CMSDK_CM3 test_CMSDK_CM3.disasm 

%.disasm : %
	${CROSS_COMPILE}objdump -S $<  > $@
