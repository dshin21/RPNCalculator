#pragma once

#include <iostream>
#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation {
public:
    static const char operation_CODE = '-';

    subtraction_operation() : abstract_operation(operation_CODE) {};

    ~subtraction_operation();

    int perform(int, int) override;
};

inline subtraction_operation::~subtraction_operation() {};

int subtraction_operation::perform(int first, int second) {
    return first - second;
}