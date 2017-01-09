################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HashTable/ChaningHashTable.c \
../HashTable/OpenAddressingHashTable.c \
../HashTable/SimpleHashTable.c \
../HashTable/Test_ChainingHashTable.c \
../HashTable/Test_OpenAddressingHashTable.c \
../HashTable/Test_SimpleHashTable.c 

OBJS += \
./HashTable/ChaningHashTable.o \
./HashTable/OpenAddressingHashTable.o \
./HashTable/SimpleHashTable.o \
./HashTable/Test_ChainingHashTable.o \
./HashTable/Test_OpenAddressingHashTable.o \
./HashTable/Test_SimpleHashTable.o 

C_DEPS += \
./HashTable/ChaningHashTable.d \
./HashTable/OpenAddressingHashTable.d \
./HashTable/SimpleHashTable.d \
./HashTable/Test_ChainingHashTable.d \
./HashTable/Test_OpenAddressingHashTable.d \
./HashTable/Test_SimpleHashTable.d 


# Each subdirectory must supply rules for building sources it contributes
HashTable/%.o: ../HashTable/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


