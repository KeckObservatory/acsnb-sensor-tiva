################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.1.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
libc.a \
"/products/TivaWare_C_Series-2.1.1.71b/grlib/ccs/Debug/grlib.lib" \
"/products/TivaWare_C_Series-2.1.1.71b/usblib/ccs/Debug/usblib.lib" \
"/products/TivaWare_C_Series-2.1.1.71b/driverlib/ccs/Debug/driverlib.lib" \

-include ../makefile.init

RM := 
RMDIR := 

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: acsndSensor.out

# Tool invocations
acsndSensor.out: 
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"acsndSensor.map" 512 0 "acsndSensor.out" "acsndSensor_linkInfo.xml" "/lib" "/include"  "acsndSensor.out"
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_CMDS__QUOTED)$(GEN_MISC_FILES__QUOTED)$(GEN_FILES__QUOTED)$(GEN_OPTS__QUOTED)
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

