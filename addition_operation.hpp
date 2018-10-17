#pragma once

#include <iostream>
#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {
public:
    static const char operation_CODE = '+';

    addition_operation() : abstract_operation(operation_CODE) {};

    ~addition_operation();

    int perform(int, int) override;
};

inline addition_operation::~addition_operation() {};

int addition_operation::perform(int first, int second) {
    return first + second;
}