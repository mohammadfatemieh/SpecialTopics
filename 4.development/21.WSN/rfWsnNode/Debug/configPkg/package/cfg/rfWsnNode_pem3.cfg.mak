# invoke SourceDir generated makefile for rfWsnNode.pem3
rfWsnNode.pem3: .libraries,rfWsnNode.pem3
.libraries,rfWsnNode.pem3: package/cfg/rfWsnNode_pem3.xdl
	$(MAKE) -f C:\Users\VMORAIS\Desktop\2nd_semester\SpecialTopics\4.development\21.WSN\rfWsnNode/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\VMORAIS\Desktop\2nd_semester\SpecialTopics\4.development\21.WSN\rfWsnNode/src/makefile.libs clean

