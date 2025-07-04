#include <iostream>
#include "Point.h"
using namespace std;

void print(int x) { cout << x << endl; }
void print(float x) { cout << x << endl; }
void print(bool x) { cout << x << endl; }

// void operator + (ost::Point& p1, ost::Point& p2) {
//     p1.x += p2.x;
//     p1.y += p2.y;
// }

// ostream& operator << (ostream& ostream, ost::Point& point) {
//     ostream << point.x << " : " << point.y << endl;
//     return ostream;
// }

// ost::Point operator - (ost::Point point1, ost::Point& point2) {
//     ost::Point point3;
//     point3.x = point1.x - point2.x;
//     point3.y = point1.y - point2.y;
//     return point3;
// }

int main() {
    cout << "----------Function Overloads-----------" << endl;
    print(1);
    print(1.0f);
    print(true);

    cout << "----------Operator Overloads-----------" << endl;

    ost::Point point1(10, 14);
    ost::Point point2(5, 8);

    //point1.Add(point2);
    ost::Point point3;
    point3 = (point1 + point2) - point1;

    // point1.Write(cout);
    // point2.Write(cout);

    cout << point1;
    cout << point2;
    cout << point3;

}