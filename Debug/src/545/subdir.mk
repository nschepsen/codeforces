################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/545/A.cpp \
../src/545/B.cpp \
../src/545/C.cpp \
../src/545/D.cpp \
../src/545/E.cpp 

OBJS += \
./src/545/A.o \
./src/545/B.o \
./src/545/C.o \
./src/545/D.o \
./src/545/E.o 

CPP_DEPS += \
./src/545/A.d \
./src/545/B.d \
./src/545/C.d \
./src/545/D.d \
./src/545/E.d 


# Each subdirectory must supply rules for building sources it contributes
src/545/%.o: ../src/545/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


