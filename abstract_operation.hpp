#pragma once

#include <iostream>
#include <string>
#include "operation.hpp"

using namespace std;

class abstract_operation : public operation {
private:
    char operation_type;

public:
    abstract_operation(char) : operation_type(operation_type) {};

    char get_code() override { return operation_type; };

    virtual ~abstract_operation();
};

inline abstract_operation::~abstract_operation() {};
