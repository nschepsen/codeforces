################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/096/A.cpp \
../src/096/B.cpp \
../src/096/C.cpp 

OBJS += \
./src/096/A.o \
./src/096/B.o \
./src/096/C.o 

CPP_DEPS += \
./src/096/A.d \
./src/096/B.d \
./src/096/C.d 


# Each subdirectory must supply rules for building sources it contributes
src/096/%.o: ../src/096/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


