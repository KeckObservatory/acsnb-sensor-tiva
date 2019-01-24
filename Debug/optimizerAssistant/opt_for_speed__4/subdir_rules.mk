################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
EK_TM4C123GXL.obj: ../EK_TM4C123GXL.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --opt_for_speed=4 --preinclude="C:/ti/TivaWare_C_Series-2.1.1.71/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" --include_path="C:/Users/scetre/workspace6_1/acsndSensor" --include_path="C:/ti/tirtos_tivac_2_14_00_10/products/TivaWare_C_Series-2.1.1.71b" --include_path="C:/ti/tirtos_tivac_2_14_00_10/packages/ti/drivers/wifi/cc3100/Simplelink" --include_path="C:/ti/tirtos_tivac_2_14_00_10/packages/ti/drivers/wifi/cc3100/Simplelink/Include" -g --gcc --define=ccs="ccs" --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="EK_TM4C123GXL.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

acsndSensor.obj: ../acsndSensor.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --opt_for_speed=4 --preinclude="C:/ti/TivaWare_C_Series-2.1.1.71/include" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" --include_path="C:/Users/scetre/workspace6_1/acsndSensor" --include_path="C:/ti/tirtos_tivac_2_14_00_10/products/TivaWare_C_Series-2.1.1.71b" --include_path="C:/ti/tirtos_tivac_2_14_00_10/packages/ti/drivers/wifi/cc3100/Simplelink" --include_path="C:/ti/tirtos_tivac_2_14_00_10/packages/ti/drivers/wifi/cc3100/Simplelink/Include" -g --gcc --define=ccs="ccs" --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="acsndSensor.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: ../acsndSensor.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_31_01_33_core/xs" --xdcpath="C:/ti/tirtos_tivac_2_14_00_10/packages;C:/ti/tirtos_tivac_2_14_00_10/products/bios_6_42_01_20/packages;C:/ti/tirtos_tivac_2_14_00_10/products/ndk_2_24_03_35/packages;C:/ti/tirtos_tivac_2_14_00_10/products/uia_2_00_02_39/packages;C:/ti/ccsv6/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.tiva:TM4C123GH6PM -r release -c "C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5" --compileOptions "-mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --opt_for_speed=4 --preinclude=\"C:/ti/TivaWare_C_Series-2.1.1.71/include\" --include_path=\"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include\" --include_path=\"C:/Users/scetre/workspace6_1/acsndSensor\" --include_path=\"C:/ti/tirtos_tivac_2_14_00_10/products/TivaWare_C_Series-2.1.1.71b\" --include_path=\"C:/ti/tirtos_tivac_2_14_00_10/packages/ti/drivers/wifi/cc3100/Simplelink\" --include_path=\"C:/ti/tirtos_tivac_2_14_00_10/packages/ti/drivers/wifi/cc3100/Simplelink/Include\" -g --gcc --define=ccs=\"ccs\" --define=PART_TM4C123GH6PM --define=ccs --define=TIVAWARE --diag_wrap=off --diag_warning=225 --diag_warning=255 --display_error_number --gen_func_subsections=on  " "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: | configPkg/linker.cmd
configPkg/: | configPkg/linker.cmd


