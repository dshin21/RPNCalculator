cmake_minimum_required(VERSION 3.12)
project(RPNCalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(RPNCalculator main.cpp operation.hpp abstract_operation.hpp addition_operation.hpp multiplication_operation.hpp division_operation.hpp subtraction_operation.hpp rpn_calculator.hpp)