################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Tree/subdir.mk
-include Stack/subdir.mk
-include Sort/subdir.mk
-include Search/subdir.mk
-include Queue/subdir.mk
-include LinkedList/subdir.mk
-include HashTable/subdir.mk
-include Graph/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Algorithm_C

# Tool invocations
Algorithm_C: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: MacOS X C Linker'
	gcc  -o "Algorithm_C" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Algorithm_C
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
