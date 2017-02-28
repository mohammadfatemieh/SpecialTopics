## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4 linker.cmd package/cfg/tcpEchoCC3X00_pem4.oem4

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/tcpEchoCC3X00_pem4.xdl
	$(SED) 's"^\"\(package/cfg/tcpEchoCC3X00_pem4cfg.cmd\)\"$""\"C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tcpEchoCC3X00_CC3200_LAUNCHXL_TI/.config/xconfig_tcpEchoCC3X00/\1\""' package/cfg/tcpEchoCC3X00_pem4.xdl > $@
	-$(SETDATE) -r:max package/cfg/tcpEchoCC3X00_pem4.h compiler.opt compiler.opt.defs
