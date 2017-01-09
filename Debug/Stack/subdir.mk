################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Stack/ArrayStack.c \
../Stack/Calculator.c \
../Stack/LinkedListStack.c \
../Stack/Test_ArrayStack.c \
../Stack/Test_Calculator.c \
../Stack/Test_LinkedListStack.c 

OBJS += \
./Stack/ArrayStack.o \
./Stack/Calculator.o \
./Stack/LinkedListStack.o \
./Stack/Test_ArrayStack.o \
./Stack/Test_Calculator.o \
./Stack/Test_LinkedListStack.o 

C_DEPS += \
./Stack/ArrayStack.d \
./Stack/Calculator.d \
./Stack/LinkedListStack.d \
./Stack/Test_ArrayStack.d \
./Stack/Test_Calculator.d \
./Stack/Test_LinkedListStack.d 


# Each subdirectory must supply rules for building sources it contributes
Stack/%.o: ../Stack/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


