################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Queue/CircularQueue.c \
../Queue/LinkedQueue.c \
../Queue/PriorityQueue.c \
../Queue/Test_CircularQueue.c \
../Queue/Test_LinkedQueue.c \
../Queue/Test_PriorityQueue.c 

OBJS += \
./Queue/CircularQueue.o \
./Queue/LinkedQueue.o \
./Queue/PriorityQueue.o \
./Queue/Test_CircularQueue.o \
./Queue/Test_LinkedQueue.o \
./Queue/Test_PriorityQueue.o 

C_DEPS += \
./Queue/CircularQueue.d \
./Queue/LinkedQueue.d \
./Queue/PriorityQueue.d \
./Queue/Test_CircularQueue.d \
./Queue/Test_LinkedQueue.d \
./Queue/Test_PriorityQueue.d 


# Each subdirectory must supply rules for building sources it contributes
Queue/%.o: ../Queue/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


