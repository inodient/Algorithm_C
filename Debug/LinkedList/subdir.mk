################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LinkedList/CirculaDoublyLinkedList.c \
../LinkedList/DoublyLinkedList.c \
../LinkedList/SingleLinkedList.c \
../LinkedList/Test_CircularDoublyLinkedList.c \
../LinkedList/Test_DoublyLinkedList.c \
../LinkedList/Test_SingleLinkedLIst.c 

OBJS += \
./LinkedList/CirculaDoublyLinkedList.o \
./LinkedList/DoublyLinkedList.o \
./LinkedList/SingleLinkedList.o \
./LinkedList/Test_CircularDoublyLinkedList.o \
./LinkedList/Test_DoublyLinkedList.o \
./LinkedList/Test_SingleLinkedLIst.o 

C_DEPS += \
./LinkedList/CirculaDoublyLinkedList.d \
./LinkedList/DoublyLinkedList.d \
./LinkedList/SingleLinkedList.d \
./LinkedList/Test_CircularDoublyLinkedList.d \
./LinkedList/Test_DoublyLinkedList.d \
./LinkedList/Test_SingleLinkedLIst.d 


# Each subdirectory must supply rules for building sources it contributes
LinkedList/%.o: ../LinkedList/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


