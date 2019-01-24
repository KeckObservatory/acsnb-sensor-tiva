################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
build-35406767:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-35406767-inproc

build-35406767-inproc: ../acsndSensor.cfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: XDCtools'
	"/xs" --xdcpath= xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.tiva:TM4C123GH6PM -r release -c --compileOptions " " "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

configPkg/linker.cmd: build-35406767 ../acsndSensor.cfg
configPkg/compiler.opt: build-35406767
configPkg/: build-35406767


