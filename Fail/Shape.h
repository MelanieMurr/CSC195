#pragma once
#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {};
    virtual ~Shape() = default; // check back on this

    virtual float Area() = 0;
};

