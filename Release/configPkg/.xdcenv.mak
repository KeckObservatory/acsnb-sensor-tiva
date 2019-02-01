#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = /Users/prichards/ti/tirtos_tivac_2_16_00_08/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/tidrivers_tivac_2_16_00_08/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/bios_6_45_01_29/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/ndk_2_25_00_09/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/uia_2_00_05_50/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/ns_1_11_00_10/packages;/Applications/ti/ccsv8/ccs_base
override XDCROOT = /Applications/ti/xdctools_3_32_02_25_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = /Users/prichards/ti/tirtos_tivac_2_16_00_08/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/tidrivers_tivac_2_16_00_08/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/bios_6_45_01_29/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/ndk_2_25_00_09/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/uia_2_00_05_50/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/ns_1_11_00_10/packages;/Applications/ti/ccsv8/ccs_base;/Applications/ti/xdctools_3_32_02_25_core/packages;..
HOSTOS = MacOS
endif
