################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Graph/AdjacencyListGraph.c \
../Graph/AdjacencyMatrixGraph.c \
../Graph/GraphTraversal.c \
../Graph/Test_AdjacencyListGraph.c \
../Graph/Test_AdjacencyMatrixGraph.c \
../Graph/Test_GraphTraversal.c 

OBJS += \
./Graph/AdjacencyListGraph.o \
./Graph/AdjacencyMatrixGraph.o \
./Graph/GraphTraversal.o \
./Graph/Test_AdjacencyListGraph.o \
./Graph/Test_AdjacencyMatrixGraph.o \
./Graph/Test_GraphTraversal.o 

C_DEPS += \
./Graph/AdjacencyListGraph.d \
./Graph/AdjacencyMatrixGraph.d \
./Graph/GraphTraversal.d \
./Graph/Test_AdjacencyListGraph.d \
./Graph/Test_AdjacencyMatrixGraph.d \
./Graph/Test_GraphTraversal.d 


# Each subdirectory must supply rules for building sources it contributes
Graph/%.o: ../Graph/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


