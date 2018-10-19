#pragma once

#include <stack>
#include "operation.hpp"
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "division_operation.hpp"
#include "multiplication_operation.hpp"
#include <sstream>

using namespace std;

class rpn_calculator {
private:

    stack<int> stack;

    void perform(operation *operation) {
        int second = stack.top();
        stack.pop();
        int first = stack.top();
        stack.pop();
        stack.push(operation->perform(first, second));
    };

    operation *operation_type(char operation) {
        switch (operation) {
            case addition_operation::operation_CODE:
                return new addition_operation;
            case subtraction_operation::operation_CODE:
                return new subtraction_operation;
            case multiplication_operation::operation_CODE:
                return new multiplication_operation;
            default:
                return new division_operation;
        }
    }

public:

    int process_formula(string formula) {
        int result;
        string operand;
        istringstream iss(formula);
        while (iss >> operand) {
            istringstream iss2(operand);
            if (iss2 >> result) stack.push(result);
            else {
                operation *op = operation_type(operand[0]);
                perform(op);
                delete op;
            }
        }
        return stack.top();
    }
};
