# invoke SourceDir generated makefile for uartecho.pem3
uartecho.pem3: .libraries,uartecho.pem3
.libraries,uartecho.pem3: package/cfg/uartecho_pem3.xdl
	$(MAKE) -f C:\Users\Vitor\Desktop\Doutoramento\2nd_semester\SpecialTopics\4.development\2.WSN\uartecho_CC1350_LAUNCHXL_TI/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Vitor\Desktop\Doutoramento\2nd_semester\SpecialTopics\4.development\2.WSN\uartecho_CC1350_LAUNCHXL_TI/src/makefile.libs clean

