# invoke SourceDir generated makefile for release.pm3g
release.pm3g: .libraries,release.pm3g
.libraries,release.pm3g: package/cfg/release_pm3g.xdl
	$(MAKE) -f C:\Users\Vitor\Desktop\Doutoramento\2nd_semester\SpecialTopics\4.development\1.CCS_workspace\tirtos_builds_CC1350_LAUNCHXL_release_gcc/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Vitor\Desktop\Doutoramento\2nd_semester\SpecialTopics\4.development\1.CCS_workspace\tirtos_builds_CC1350_LAUNCHXL_release_gcc/src/makefile.libs clean

