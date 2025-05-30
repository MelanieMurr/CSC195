#pragma once
#include <iostream>
using namespace std;

namespace ost {
    class Point {
    public:
        float x, y;

    public:
        //Point() { x = 0; y = 0; } -- 2 step process
        Point() : x{0}, y{0} {} //single step process
        Point(float x, float y) : x{ x }, y{ y } {}

        void Write(ostream& ostream);
        void Add(Point& point);

        Point operator + (Point& p2);

        Point operator - (Point point);

        Point operator * (float s);

        // access private variables in a non-member function
        friend ostream& operator << (ostream& ostream, ost::Point& point);

    };


}

