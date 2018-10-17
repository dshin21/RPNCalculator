#pragma once

#include <iostream>
#include "abstract_operation.hpp"

class division_operation : public abstract_operation {
public:
    static const char operation_CODE = '/';

    division_operation() : abstract_operation(operation_CODE) {};

    ~division_operation();

    int perform(int, int) override;
};

inline division_operation::~division_operation() {};

int division_operation::perform(int first, int second) {
    return first / second;
}