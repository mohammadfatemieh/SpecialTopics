# invoke SourceDir generated makefile for display.pem3
display.pem3: .libraries,display.pem3
.libraries,display.pem3: package/cfg/display_pem3.xdl
	$(MAKE) -f C:\Users\Vitor\Desktop\Doutoramento\2nd_semester\SpecialTopics\4.development\2.WSN\display_CC1350_LAUNCHXL_TI/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Vitor\Desktop\Doutoramento\2nd_semester\SpecialTopics\4.development\2.WSN\display_CC1350_LAUNCHXL_TI/src/makefile.libs clean

