################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Tree/BinarySearchTree.c \
../Tree/BinaryTree.c \
../Tree/DisjointSet.c \
../Tree/ExpressionTree.c \
../Tree/Heap.c \
../Tree/LCRSTree.c \
../Tree/RedBlackTree.c \
../Tree/Test_BinarySearchTree.c \
../Tree/Test_BinaryTree.c \
../Tree/Test_DisjointSet.c \
../Tree/Test_ExpressionTree.c \
../Tree/Test_Head.c \
../Tree/Test_LCRSTree.c \
../Tree/Test_RedBlackTree.c 

OBJS += \
./Tree/BinarySearchTree.o \
./Tree/BinaryTree.o \
./Tree/DisjointSet.o \
./Tree/ExpressionTree.o \
./Tree/Heap.o \
./Tree/LCRSTree.o \
./Tree/RedBlackTree.o \
./Tree/Test_BinarySearchTree.o \
./Tree/Test_BinaryTree.o \
./Tree/Test_DisjointSet.o \
./Tree/Test_ExpressionTree.o \
./Tree/Test_Head.o \
./Tree/Test_LCRSTree.o \
./Tree/Test_RedBlackTree.o 

C_DEPS += \
./Tree/BinarySearchTree.d \
./Tree/BinaryTree.d \
./Tree/DisjointSet.d \
./Tree/ExpressionTree.d \
./Tree/Heap.d \
./Tree/LCRSTree.d \
./Tree/RedBlackTree.d \
./Tree/Test_BinarySearchTree.d \
./Tree/Test_BinaryTree.d \
./Tree/Test_DisjointSet.d \
./Tree/Test_ExpressionTree.d \
./Tree/Test_Head.d \
./Tree/Test_LCRSTree.d \
./Tree/Test_RedBlackTree.d 


# Each subdirectory must supply rules for building sources it contributes
Tree/%.o: ../Tree/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


