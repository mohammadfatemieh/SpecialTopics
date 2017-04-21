vpath % C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/ti/sysbios/
vpath %.c C:/ti/xdctools_3_50_00_10_core/packages/

CCOPTS    =  -DDEVICE_FAMILY=cc13x0  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-m3 -mthumb -mabi=aapcs -g  -Os  -IC:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/gnu/targets/arm//libs/install-native/$(GCCTARG)/include -Dfar= -D__DYNAMIC_REENT__   -Dti_sysbios_knl_Task_minimizeLatency__D=FALSE -Dti_sysbios_rts_gnu_ReentSupport_enableReentSupport__D=FALSE -Dti_sysbios_family_arm_cc26xx_Boot_driverlibVersion=2  -Dti_sysbios_posix_Settings_debug__D=FALSE -Dti_sysbios_posix_Settings_supportsMutexPriority__D=FALSE -Dti_sysbios_knl_Clock_stopCheckNext__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_enableException__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_disablePriority__D=32U -Dti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__D=0U

XDC_ROOT  = C:/ti/xdctools_3_50_00_10_core/packages/

BIOS_ROOT = C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/ti/sysbios/

BIOS_DEFS =  -Dti_sysbios_BIOS_swiEnabled__D=TRUE -Dti_sysbios_BIOS_taskEnabled__D=TRUE -Dti_sysbios_BIOS_clockEnabled__D=TRUE -Dti_sysbios_BIOS_runtimeCreatesEnabled__D=TRUE -Dti_sysbios_knl_Task_moduleStateCheckFlag__D=FALSE -Dti_sysbios_knl_Task_objectCheckFlag__D=FALSE -Dti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Swi_DISABLE_ALL_HOOKS -Dti_sysbios_BIOS_smpEnabled__D=FALSE -Dti_sysbios_Build_useHwiMacros -Dti_sysbios_Build_useIndirectReferences=FALSE -Dti_sysbios_knl_Swi_numPriorities__D=6 -Dti_sysbios_knl_Task_deleteTerminatedTasks__D=FALSE -Dti_sysbios_knl_Task_numPriorities__D=6 -Dti_sysbios_knl_Task_checkStackFlag__D=FALSE -Dti_sysbios_knl_Task_initStackFlag__D=TRUE -Dti_sysbios_knl_Task_DISABLE_ALL_HOOKS -Dti_sysbios_knl_Clock_TICK_SOURCE=ti_sysbios_knl_Clock_TickSource_TIMER -Dti_sysbios_knl_Clock_TICK_MODE=ti_sysbios_knl_Clock_TickMode_DYNAMIC -Dti_sysbios_hal_Core_delegate_getId=ti_sysbios_hal_CoreNull_getId__E -Dti_sysbios_hal_Core_delegate_interruptCore=ti_sysbios_hal_CoreNull_interruptCore__E -Dti_sysbios_hal_Core_delegate_lock=ti_sysbios_hal_CoreNull_lock__E -Dti_sysbios_hal_Core_delegate_unlock=ti_sysbios_hal_CoreNull_unlock__E -Dti_sysbios_hal_Core_numCores__D=1 -Dti_sysbios_hal_CoreNull_numCores__D=1 -Dti_sysbios_utils_Load_taskEnabled__D=TRUE -Dti_sysbios_utils_Load_swiEnabled__D=FALSE -Dti_sysbios_utils_Load_hwiEnabled__D=FALSE -Dti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__D=TRUE -Dti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__D=TRUE -Dti_sysbios_knl_Semaphore_supportsEvents__D=FALSE -Dti_sysbios_knl_Semaphore_supportsPriority__D=FALSE -Dxdc_runtime_Assert_DISABLE_ALL -Dxdc_runtime_Log_DISABLE_ALL -DDEVICE_FAMILY=cc13x0 

BIOS_INC  = -I"C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/"

INCS =  $(BIOS_INC) -I"C:/ti/simplelink_cc13x0_sdk_1_30_00_06/source/" -I"C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/" -I"C:/ti/ccsv7/ccs_base/" -I"C:/ti/xdctools_3_50_00_10_core/packages/" -I"../" -I"/packages//" 

GCCTARG = arm-none-eabi

CC = C:/ti/ccsv7/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc -c -MD -MF $@.dep $(CCOPTS)
ASM = C:/ti/ccsv7/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc -c -x assembler-with-cpp $(CCOPTS)
AR = C:/ti/ccsv7/tools/compiler/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-ar  cr

DEL = C:/ti/xdctools_3_50_00_10_core/packages/../bin/rm -f
CP = C:/ti/xdctools_3_50_00_10_core/packages/../bin/cp -f

define RM
	$(if $(wildcard $1),$(DEL) $1,:)
endef

define ASSEMBLE
	@echo asmm3g $< ...
	@$(ASM) $(BIOS_DEFS) -I "C:/ti/xdctools_3_50_00_10_core/packages/" -Dxdc_target_types__=C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/gnu/targets/arm/std.h -Dxdc_target_name__=M3 $(INCS) $<
endef

define COMPILE
	@echo clm3g $< ...
	@$(CC) -Os $(BIOS_DEFS) -I "C:/ti/xdctools_3_50_00_10_core/packages/" -Dxdc_target_types__=C:/ti/simplelink_cc13x0_sdk_1_30_00_06/kernel/tirtos/packages/gnu/targets/arm/std.h -Dxdc_target_name__=M3 $(INCS) $<
endef


all: rom_sysbios.am3g

m3_Hwi_asm_gnu.o: family/arm/m3/Hwi_asm_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_Hwi_asm_gnu.o

m3_Hwi_asm_switch_gnu.o: family/arm/m3/Hwi_asm_switch_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_Hwi_asm_switch_gnu.o

m3_IntrinsicsSupport_asm_gnu.o: family/arm/m3/IntrinsicsSupport_asm_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_IntrinsicsSupport_asm_gnu.o

m3_TaskSupport_asm_gnu.o: family/arm/m3/TaskSupport_asm_gnu.sv7M makefile
	@-$(call RM, $@)
	$(ASSEMBLE) -o m3_TaskSupport_asm_gnu.o


_BIOS.o: BIOS.c makefile
	@-$(call RM, _BIOS.o)
	$(COMPILE) -o _BIOS.o
knl_Clock.o: knl/Clock.c makefile
	@-$(call RM, knl_Clock.o)
	$(COMPILE) -o knl_Clock.o
cfg_release_pm3g_ti_sysbios_knl_Clock_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Clock_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Clock_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Clock_config.o
knl_Idle.o: knl/Idle.c makefile
	@-$(call RM, knl_Idle.o)
	$(COMPILE) -o knl_Idle.o
knl_Intrinsics.o: knl/Intrinsics.c makefile
	@-$(call RM, knl_Intrinsics.o)
	$(COMPILE) -o knl_Intrinsics.o
knl_Event.o: knl/Event.c makefile
	@-$(call RM, knl_Event.o)
	$(COMPILE) -o knl_Event.o
knl_Mailbox.o: knl/Mailbox.c makefile
	@-$(call RM, knl_Mailbox.o)
	$(COMPILE) -o knl_Mailbox.o
cfg_release_pm3g_ti_sysbios_knl_Mailbox_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Mailbox_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Mailbox_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Mailbox_config.o
knl_Queue.o: knl/Queue.c makefile
	@-$(call RM, knl_Queue.o)
	$(COMPILE) -o knl_Queue.o
cfg_release_pm3g_ti_sysbios_knl_Queue_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Queue_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Queue_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Queue_config.o
knl_Semaphore.o: knl/Semaphore.c makefile
	@-$(call RM, knl_Semaphore.o)
	$(COMPILE) -o knl_Semaphore.o
cfg_release_pm3g_ti_sysbios_knl_Semaphore_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Semaphore_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Semaphore_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Semaphore_config.o
knl_Swi.o: knl/Swi.c makefile
	@-$(call RM, knl_Swi.o)
	$(COMPILE) -o knl_Swi.o
knl_Swi_andn.o: knl/Swi_andn.c makefile
	@-$(call RM, knl_Swi_andn.o)
	$(COMPILE) -o knl_Swi_andn.o
cfg_release_pm3g_ti_sysbios_knl_Swi_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Swi_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Swi_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Swi_config.o
knl_Task.o: knl/Task.c makefile
	@-$(call RM, knl_Task.o)
	$(COMPILE) -o knl_Task.o
cfg_release_pm3g_ti_sysbios_knl_Task_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Task_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Task_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Task_config.o
cfg_release_pm3g_ti_sysbios_knl_Clock_TimerProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Clock_TimerProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Clock_TimerProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Clock_TimerProxy_config.o
cfg_release_pm3g_ti_sysbios_knl_Task_SupportProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_knl_Task_SupportProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_knl_Task_SupportProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_knl_Task_SupportProxy_config.o
cfg_release_pm3g_ti_sysbios_BIOS_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_BIOS_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_BIOS_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_BIOS_config.o
cfg_release_pm3g_ti_sysbios_BIOS_RtsGateProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_BIOS_RtsGateProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_BIOS_RtsGateProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_BIOS_RtsGateProxy_config.o
m3_Hwi.o: family/arm/m3/Hwi.c makefile
	@-$(call RM, m3_Hwi.o)
	$(COMPILE) -o m3_Hwi.o
cfg_release_pm3g_ti_sysbios_family_arm_m3_Hwi_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_family_arm_m3_Hwi_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_family_arm_m3_Hwi_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_family_arm_m3_Hwi_config.o
m3_TaskSupport.o: family/arm/m3/TaskSupport.c makefile
	@-$(call RM, m3_TaskSupport.o)
	$(COMPILE) -o m3_TaskSupport.o
cfg_release_pm3g_ti_sysbios_family_arm_m3_TaskSupport_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_family_arm_m3_TaskSupport_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_family_arm_m3_TaskSupport_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_family_arm_m3_TaskSupport_config.o
cc26xx_Boot.o: family/arm/cc26xx/Boot.c makefile
	@-$(call RM, cc26xx_Boot.o)
	$(COMPILE) -o cc26xx_Boot.o
cc26xx_Seconds.o: family/arm/cc26xx/Seconds.c makefile
	@-$(call RM, cc26xx_Seconds.o)
	$(COMPILE) -o cc26xx_Seconds.o
cc26xx_Timer.o: family/arm/cc26xx/Timer.c makefile
	@-$(call RM, cc26xx_Timer.o)
	$(COMPILE) -o cc26xx_Timer.o
cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_Timer_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_family_arm_cc26xx_Timer_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_Timer_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_Timer_config.o
cc26xx_TimestampProvider.o: family/arm/cc26xx/TimestampProvider.c makefile
	@-$(call RM, cc26xx_TimestampProvider.o)
	$(COMPILE) -o cc26xx_TimestampProvider.o
cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o
hal_Hwi.o: hal/Hwi.c makefile
	@-$(call RM, hal_Hwi.o)
	$(COMPILE) -o hal_Hwi.o
hal_Hwi_stack.o: hal/Hwi_stack.c makefile
	@-$(call RM, hal_Hwi_stack.o)
	$(COMPILE) -o hal_Hwi_stack.o
hal_Hwi_startup.o: hal/Hwi_startup.c makefile
	@-$(call RM, hal_Hwi_startup.o)
	$(COMPILE) -o hal_Hwi_startup.o
cfg_release_pm3g_ti_sysbios_hal_Hwi_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_hal_Hwi_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_hal_Hwi_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_hal_Hwi_config.o
hal_Seconds.o: hal/Seconds.c makefile
	@-$(call RM, hal_Seconds.o)
	$(COMPILE) -o hal_Seconds.o
cfg_release_pm3g_ti_sysbios_hal_Hwi_HwiProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_hal_Hwi_HwiProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_hal_Hwi_HwiProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_hal_Hwi_HwiProxy_config.o
heaps_HeapMem.o: heaps/HeapMem.c makefile
	@-$(call RM, heaps_HeapMem.o)
	$(COMPILE) -o heaps_HeapMem.o
cfg_release_pm3g_ti_sysbios_heaps_HeapMem_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_heaps_HeapMem_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_heaps_HeapMem_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_heaps_HeapMem_config.o
cfg_release_pm3g_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o
gnu_ReentSupport.o: rts/gnu/ReentSupport.c makefile
	@-$(call RM, gnu_ReentSupport.o)
	$(COMPILE) -o gnu_ReentSupport.o
posix_pthread.o: posix/pthread.c makefile
	@-$(call RM, posix_pthread.o)
	$(COMPILE) -o posix_pthread.o
posix_pthread_barrier.o: posix/pthread_barrier.c makefile
	@-$(call RM, posix_pthread_barrier.o)
	$(COMPILE) -o posix_pthread_barrier.o
posix_pthread_cond.o: posix/pthread_cond.c makefile
	@-$(call RM, posix_pthread_cond.o)
	$(COMPILE) -o posix_pthread_cond.o
posix_pthread_key.o: posix/pthread_key.c makefile
	@-$(call RM, posix_pthread_key.o)
	$(COMPILE) -o posix_pthread_key.o
posix_pthread_mutex.o: posix/pthread_mutex.c makefile
	@-$(call RM, posix_pthread_mutex.o)
	$(COMPILE) -o posix_pthread_mutex.o
posix_pthread_rwlock.o: posix/pthread_rwlock.c makefile
	@-$(call RM, posix_pthread_rwlock.o)
	$(COMPILE) -o posix_pthread_rwlock.o
posix_clock.o: posix/clock.c makefile
	@-$(call RM, posix_clock.o)
	$(COMPILE) -o posix_clock.o
posix_mqueue.o: posix/mqueue.c makefile
	@-$(call RM, posix_mqueue.o)
	$(COMPILE) -o posix_mqueue.o
posix_sched.o: posix/sched.c makefile
	@-$(call RM, posix_sched.o)
	$(COMPILE) -o posix_sched.o
posix_semaphore.o: posix/semaphore.c makefile
	@-$(call RM, posix_semaphore.o)
	$(COMPILE) -o posix_semaphore.o
posix_sleep.o: posix/sleep.c makefile
	@-$(call RM, posix_sleep.o)
	$(COMPILE) -o posix_sleep.o
posix_timer.o: posix/timer.c makefile
	@-$(call RM, posix_timer.o)
	$(COMPILE) -o posix_timer.o
gates_GateHwi.o: gates/GateHwi.c makefile
	@-$(call RM, gates_GateHwi.o)
	$(COMPILE) -o gates_GateHwi.o
cfg_release_pm3g_ti_sysbios_gates_GateHwi_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_gates_GateHwi_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_gates_GateHwi_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_gates_GateHwi_config.o
gates_GateMutex.o: gates/GateMutex.c makefile
	@-$(call RM, gates_GateMutex.o)
	$(COMPILE) -o gates_GateMutex.o
cfg_release_pm3g_ti_sysbios_gates_GateMutex_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_ti_sysbios_gates_GateMutex_config.c makefile
	@-$(call RM, cfg_release_pm3g_ti_sysbios_gates_GateMutex_config.o)
	$(COMPILE) -o cfg_release_pm3g_ti_sysbios_gates_GateMutex_config.o
runtime_xdc_noinit.o: xdc/runtime/xdc_noinit.c makefile
	@-$(call RM, runtime_xdc_noinit.o)
	$(COMPILE) -o runtime_xdc_noinit.o
runtime_Assert.o: xdc/runtime/Assert.c makefile
	@-$(call RM, runtime_Assert.o)
	$(COMPILE) -o runtime_Assert.o
runtime_Core-mem.o: xdc/runtime/Core-mem.c makefile
	@-$(call RM, runtime_Core-mem.o)
	$(COMPILE) -o runtime_Core-mem.o
runtime_Core-smem.o: xdc/runtime/Core-smem.c makefile
	@-$(call RM, runtime_Core-smem.o)
	$(COMPILE) -o runtime_Core-smem.o
runtime_Core-label.o: xdc/runtime/Core-label.c makefile
	@-$(call RM, runtime_Core-label.o)
	$(COMPILE) -o runtime_Core-label.o
runtime_Core-params.o: xdc/runtime/Core-params.c makefile
	@-$(call RM, runtime_Core-params.o)
	$(COMPILE) -o runtime_Core-params.o
runtime_Diags.o: xdc/runtime/Diags.c makefile
	@-$(call RM, runtime_Diags.o)
	$(COMPILE) -o runtime_Diags.o
runtime_Error.o: xdc/runtime/Error.c makefile
	@-$(call RM, runtime_Error.o)
	$(COMPILE) -o runtime_Error.o
cfg_release_pm3g_xdc_runtime_Error_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_Error_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_Error_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_Error_config.o
runtime_Gate.o: xdc/runtime/Gate.c makefile
	@-$(call RM, runtime_Gate.o)
	$(COMPILE) -o runtime_Gate.o
runtime_Log.o: xdc/runtime/Log.c makefile
	@-$(call RM, runtime_Log.o)
	$(COMPILE) -o runtime_Log.o
runtime_Memory.o: xdc/runtime/Memory.c makefile
	@-$(call RM, runtime_Memory.o)
	$(COMPILE) -o runtime_Memory.o
cfg_release_pm3g_xdc_runtime_Memory_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_Memory_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_Memory_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_Memory_config.o
runtime_Registry.o: xdc/runtime/Registry.c makefile
	@-$(call RM, runtime_Registry.o)
	$(COMPILE) -o runtime_Registry.o
runtime_Startup.o: xdc/runtime/Startup.c makefile
	@-$(call RM, runtime_Startup.o)
	$(COMPILE) -o runtime_Startup.o
runtime_System.o: xdc/runtime/System.c makefile
	@-$(call RM, runtime_System.o)
	$(COMPILE) -o runtime_System.o
cfg_release_pm3g_xdc_runtime_System_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_System_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_System_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_System_config.o
runtime_SysCallback.o: xdc/runtime/SysCallback.c makefile
	@-$(call RM, runtime_SysCallback.o)
	$(COMPILE) -o runtime_SysCallback.o
cfg_release_pm3g_xdc_runtime_SysCallback_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_SysCallback_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_SysCallback_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_SysCallback_config.o
runtime_Text.o: xdc/runtime/Text.c makefile
	@-$(call RM, runtime_Text.o)
	$(COMPILE) -o runtime_Text.o
runtime_Timestamp.o: xdc/runtime/Timestamp.c makefile
	@-$(call RM, runtime_Timestamp.o)
	$(COMPILE) -o runtime_Timestamp.o
cfg_release_pm3g_xdc_runtime_Timestamp_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_Timestamp_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_Timestamp_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_Timestamp_config.o
cfg_release_pm3g_xdc_runtime_Memory_HeapProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_Memory_HeapProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_Memory_HeapProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_Memory_HeapProxy_config.o
cfg_release_pm3g_xdc_runtime_System_Module_GateProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_System_Module_GateProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_System_Module_GateProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_System_Module_GateProxy_config.o
cfg_release_pm3g_xdc_runtime_Timestamp_SupportProxy_config.o: C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/1.CCS_workspace/tirtos_builds_CC1350_LAUNCHXL_release_gcc/Debug/configPkg/package/cfg/release_pm3g_xdc_runtime_Timestamp_SupportProxy_config.c makefile
	@-$(call RM, cfg_release_pm3g_xdc_runtime_Timestamp_SupportProxy_config.o)
	$(COMPILE) -o cfg_release_pm3g_xdc_runtime_Timestamp_SupportProxy_config.o

rom_sysbios.am3g: m3_Hwi_asm_gnu.o m3_Hwi_asm_switch_gnu.o m3_IntrinsicsSupport_asm_gnu.o m3_TaskSupport_asm_gnu.o _BIOS.o knl_Clock.o cfg_release_pm3g_ti_sysbios_knl_Clock_config.o knl_Idle.o knl_Intrinsics.o knl_Event.o knl_Mailbox.o cfg_release_pm3g_ti_sysbios_knl_Mailbox_config.o knl_Queue.o cfg_release_pm3g_ti_sysbios_knl_Queue_config.o knl_Semaphore.o cfg_release_pm3g_ti_sysbios_knl_Semaphore_config.o knl_Swi.o knl_Swi_andn.o cfg_release_pm3g_ti_sysbios_knl_Swi_config.o knl_Task.o cfg_release_pm3g_ti_sysbios_knl_Task_config.o cfg_release_pm3g_ti_sysbios_knl_Clock_TimerProxy_config.o cfg_release_pm3g_ti_sysbios_knl_Task_SupportProxy_config.o cfg_release_pm3g_ti_sysbios_BIOS_config.o cfg_release_pm3g_ti_sysbios_BIOS_RtsGateProxy_config.o m3_Hwi.o cfg_release_pm3g_ti_sysbios_family_arm_m3_Hwi_config.o m3_TaskSupport.o cfg_release_pm3g_ti_sysbios_family_arm_m3_TaskSupport_config.o cc26xx_Boot.o cc26xx_Seconds.o cc26xx_Timer.o cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_Timer_config.o cc26xx_TimestampProvider.o cfg_release_pm3g_ti_sysbios_family_arm_cc26xx_TimestampProvider_config.o hal_Hwi.o hal_Hwi_stack.o hal_Hwi_startup.o cfg_release_pm3g_ti_sysbios_hal_Hwi_config.o hal_Seconds.o cfg_release_pm3g_ti_sysbios_hal_Hwi_HwiProxy_config.o heaps_HeapMem.o cfg_release_pm3g_ti_sysbios_heaps_HeapMem_config.o cfg_release_pm3g_ti_sysbios_heaps_HeapMem_Module_GateProxy_config.o gnu_ReentSupport.o posix_pthread.o posix_pthread_barrier.o posix_pthread_cond.o posix_pthread_key.o posix_pthread_mutex.o posix_pthread_rwlock.o posix_clock.o posix_mqueue.o posix_sched.o posix_semaphore.o posix_sleep.o posix_timer.o gates_GateHwi.o cfg_release_pm3g_ti_sysbios_gates_GateHwi_config.o gates_GateMutex.o cfg_release_pm3g_ti_sysbios_gates_GateMutex_config.o runtime_xdc_noinit.o runtime_Assert.o runtime_Core-mem.o runtime_Core-smem.o runtime_Core-label.o runtime_Core-params.o runtime_Diags.o runtime_Error.o cfg_release_pm3g_xdc_runtime_Error_config.o runtime_Gate.o runtime_Log.o runtime_Memory.o cfg_release_pm3g_xdc_runtime_Memory_config.o runtime_Registry.o runtime_Startup.o runtime_System.o cfg_release_pm3g_xdc_runtime_System_config.o runtime_SysCallback.o cfg_release_pm3g_xdc_runtime_SysCallback_config.o runtime_Text.o runtime_Timestamp.o cfg_release_pm3g_xdc_runtime_Timestamp_config.o cfg_release_pm3g_xdc_runtime_Memory_HeapProxy_config.o cfg_release_pm3g_xdc_runtime_System_Module_GateProxy_config.o cfg_release_pm3g_xdc_runtime_Timestamp_SupportProxy_config.o
	@echo arm3g $^ ...
	@-$(call RM, $@)
	@$(AR) $@ $^

clean:
	@$(DEL) ..\makefile.libs
	@-$(call RM, *)
