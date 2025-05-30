#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    (*c).SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (Shape* s : shapes)
    {
        cout << "Area: " << s->Area() << endl;
        if (auto* c = dynamic_cast<Circle*>(s)) {
            cout << " radius: " << c->GetRadius() << endl;
        }
    }

    for (Shape* s : shapes) {
        delete s;
    }

    return 0;
}
