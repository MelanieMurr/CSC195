#include "Point.h"

void ost::Point::Write(ostream& ostream) {
    ostream << x << " : " << y << endl;
}

void ost::Point::Add(Point &point) {
    x += point.x; // x = x + point.x
    y += point.y;
}

ost::Point ost::Point::operator+(Point &p2) {
    Point sumPoint;
    sumPoint.x = x + p2.x;
    sumPoint.y = y + p2.y;
    return sumPoint;
}

ost::Point ost::Point::operator-(Point point) {
    return Point(x - point.x, y - point.y);
}

ost::Point ost::Point::operator*(float s) {
    return Point(x*s, y*s);
}


ostream & ost::operator<<(ostream &ostream, ost::Point &point) {
    ostream << point.x << " : " << point.y << endl;
    return ostream;
}
