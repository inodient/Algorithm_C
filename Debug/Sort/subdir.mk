################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sort/Sort.c \
../Sort/Sort_Exercise.c 

OBJS += \
./Sort/Sort.o \
./Sort/Sort_Exercise.o 

C_DEPS += \
./Sort/Sort.d \
./Sort/Sort_Exercise.d 


# Each subdirectory must supply rules for building sources it contributes
Sort/%.o: ../Sort/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


