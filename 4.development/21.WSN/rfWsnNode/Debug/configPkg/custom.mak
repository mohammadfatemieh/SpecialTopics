## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em3 linker.cmd package/cfg/rfWsnNode_pem3.oem3

# To simplify configuro usage in makefiles:
#     o create a generic linker command file name 
#     o set modification times of compiler.opt* files to be greater than
#       or equal to the generated config header
#
linker.cmd: package/cfg/rfWsnNode_pem3.xdl
	$(SED) 's"^\"\(package/cfg/rfWsnNode_pem3cfg.cmd\)\"$""\"C:/Users/VMORAIS/Desktop/2nd_semester/SpecialTopics/4.development/21.WSN/rfWsnNode/Debug/configPkg/\1\""' package/cfg/rfWsnNode_pem3.xdl > $@
	-$(SETDATE) -r:max package/cfg/rfWsnNode_pem3.h compiler.opt compiler.opt.defs
