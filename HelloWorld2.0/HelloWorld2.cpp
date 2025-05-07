#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Multiple lines!\n";
    cout << "Multiple lines!\n";
    cout << "Multiple lines!\n";

    int i = 0;
    //cout << "Enter number: " << endl;
    cin >> i;

    // Data Type Conversion
    // implicit conversion
        // target data type has the capacity (memory) to store the original value
    short numShrt = 5;
    int numInt = numShrt;
    std::cout << numInt << std::endl;

    //explicit conversion
    double numDbl = 345.546;
    int numIntDbl = numDbl; // traditional C++ way

    numIntDbl = static_cast<int>(numDbl); // modern C++ way + compile time conversion

    std::cout << numIntDbl << std::endl;


}

