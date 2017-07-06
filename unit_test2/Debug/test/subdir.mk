################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../test/gtest_main.cc \
../test/test_factorial.cc 

CC_DEPS += \
./test/gtest_main.d \
./test/test_factorial.d 

OBJS += \
./test/gtest_main.o \
./test/test_factorial.o 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"E:\eclipse_workspace\unit_test2\gtest_src" -I"E:\eclipse_workspace\unit_test2\inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


