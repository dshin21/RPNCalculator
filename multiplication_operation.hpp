#pragma once

#include <iostream>
#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation {
public:
    static const char operation_CODE = '*';

    multiplication_operation() : abstract_operation(operation_CODE) {};

    ~multiplication_operation();

    int perform(int, int) override;
};

inline multiplication_operation::~multiplication_operation() {};

int multiplication_operation::perform(int first, int second) {
    return first * second;
}