################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
sce/scif.obj: ../sce/scif.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.1.LTS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/easylink" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/smartrf_settings" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/sce" --include_path="C:/ti/tirex-content/tirtos_cc13xx_cc26xx_2_21_00_06/products/cc13xxware_2_04_03_17272" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.1.LTS/include" -g --define=ccs --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="sce/scif.d" --obj_directory="sce" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

sce/scif_framework.obj: ../sce/scif_framework.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.1.LTS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/easylink" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/smartrf_settings" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/sce" --include_path="C:/ti/tirex-content/tirtos_cc13xx_cc26xx_2_21_00_06/products/cc13xxware_2_04_03_17272" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.1.LTS/include" -g --define=ccs --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="sce/scif_framework.d" --obj_directory="sce" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

sce/scif_osal_tirtos.obj: ../sce/scif_osal_tirtos.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.1.LTS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/easylink" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/smartrf_settings" --include_path="C:/Users/Vitor/Desktop/Doutoramento/2nd_semester/SpecialTopics/4.development/2.WSN/rfWsnNode_CC1310_LAUNCHXL_TI/sce" --include_path="C:/ti/tirex-content/tirtos_cc13xx_cc26xx_2_21_00_06/products/cc13xxware_2_04_03_17272" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-arm_16.9.1.LTS/include" -g --define=ccs --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="sce/scif_osal_tirtos.d" --obj_directory="sce" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


