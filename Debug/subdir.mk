################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CFG_SRCS += \
../acsnb-sensor-tiva.cfg 


# Each subdirectory must supply rules for building sources it contributes
configPkg/linker.cmd: ../acsnb-sensor-tiva.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"/xs" --xdcpath= xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.tiva:TM4C1230E6PM -r release -c --compileOptions " " "$<"
	@echo 'Finished building: $<'
	@echo ' '


