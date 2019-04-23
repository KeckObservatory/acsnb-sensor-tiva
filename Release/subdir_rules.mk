################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.1.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O2 --include_path="/Applications/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.1.LTS/include" --include_path="/Collections/Projects/acsnb-sensor-tiva" --include_path="/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/TivaWare_C_Series-2.1.1.71b" --define=ccs="ccs" --define=ccs --define=TIVAWARE --define=PART_TM4C1230E6PM -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-364797969:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-364797969-inproc

build-364797969-inproc: ../acsnb-sensor-tiva.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/Applications/ti/ccs901/xdctools_3_55_00_11_core/xs" --xdcpath="/Users/prichards/ti/tirtos_tivac_2_16_00_08/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/tidrivers_tivac_2_16_00_08/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/bios_6_45_01_29/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/ndk_2_25_00_09/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/uia_2_00_05_50/packages;/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/ns_1_11_00_10/packages;/Applications/ti/ccs901/ccs/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.tiva:TM4C123GH6PM -r release -c "/Applications/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.1.LTS" --compileOptions "-mv7M4 --code_state=16 --float_support=FPv4SPD16 -me -O2 --include_path=\"/Applications/ti/ccs901/ccs/tools/compiler/ti-cgt-arm_18.12.1.LTS/include\" --include_path=\"/Collections/Projects/acsnb-sensor-tiva\" --include_path=\"/Users/prichards/ti/tirtos_tivac_2_16_00_08/products/TivaWare_C_Series-2.1.1.71b\" --define=ccs=\"ccs\" --define=ccs --define=TIVAWARE --define=PART_TM4C1230E6PM -g --gcc --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi  " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-364797969 ../acsnb-sensor-tiva.cfg
configPkg/compiler.opt: build-364797969
configPkg/: build-364797969


