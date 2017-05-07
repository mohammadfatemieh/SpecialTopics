# invoke SourceDir generated makefile for rfExamples.pem3
rfExamples.pem3: .libraries,rfExamples.pem3
.libraries,rfExamples.pem3: package/cfg/rfExamples_pem3.xdl
	$(MAKE) -f C:\Users\VMORAIS\Desktop\2nd_semester\SpecialTopics\4.development\2.WSN\rfWsnConcentrator_CC1310_LAUNCHXL_TI/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\VMORAIS\Desktop\2nd_semester\SpecialTopics\4.development\2.WSN\rfWsnConcentrator_CC1310_LAUNCHXL_TI/src/makefile.libs clean

