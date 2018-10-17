#pragma once

#include <iostream>

class operation {
public:
    virtual char get_code() = 0;

    virtual int perform(int, int) = 0;

    virtual ~operation();
};

inline operation::~operation() {};