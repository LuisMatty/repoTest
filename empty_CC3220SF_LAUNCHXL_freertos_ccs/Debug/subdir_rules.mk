################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"F:/Programs/CCS/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="F:/Programs/CCS/workspace_v9/empty_CC3220SF_LAUNCHXL_freertos_ccs" --include_path="C:/ti/simplelink_cc32xx_sdk_2_40_00_05/source" --include_path="C:/ti/simplelink_cc32xx_sdk_2_40_00_05/source/ti/posix/ccs" --include_path="F:/Matty/FreeRTOSv10.2.1/FreeRTOS/Source/include" --include_path="F:/Matty/FreeRTOSv10.2.1/FreeRTOS/Source/portable/CCS/ARM_CM3" --include_path="F:/Programs/CCS/workspace_v9/freertos_builds_CC3220SF_LAUNCHXL_release_ccs" --include_path="F:/Programs/CCS/ccs/tools/compiler/ti-cgt-arm_18.12.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


