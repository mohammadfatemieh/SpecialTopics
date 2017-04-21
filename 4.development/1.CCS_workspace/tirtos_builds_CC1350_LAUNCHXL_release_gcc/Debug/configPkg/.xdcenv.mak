#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/simplelink_cc13x0_sdk_1_30_00_06/source;C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages;C:/ti/ccsv7/ccs_base
override XDCROOT = C:/ti/xdctools_3_50_00_10_core
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/simplelink_cc13x0_sdk_1_30_00_06/source;C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages;C:/ti/ccsv7/ccs_base;C:/ti/xdctools_3_50_00_10_core/packages;..
HOSTOS = Windows
endif
