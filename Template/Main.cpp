#include <iostream>
#include "TempClass.h"
using namespace std;

namespace awe {
    // int max(int i1, int i2) {
    //     return (i1 > i2) ? i1 : i2; //ternary operator
    // }
    //
    // float max(float i1, float i2) {
    //     return (i1 > i2) ? i1 : i2;
    // }

    template<typename T, typename D> // the placeholder replaces the datetype
    T max(T i1, D i2) {
        return (i1 > i2) ? i1 : i2;
    }
}

int main() {
    cout << awe::max(2.3f, 5.7f) << endl;
    cout << awe::max(2, 5) << endl;
    cout << awe::max(2, 5.6f) << endl;

    TempClass<int> t1(3, 7);

    TempArray<string, 5> strArray;

    strArray[2] = "Hi";
}
