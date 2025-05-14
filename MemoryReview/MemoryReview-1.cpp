#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void square(int s) {
	s = s * s;
}

void newSquare(int& n) {
	n = n * n;
}

void Double(int* d) {
	*d = *d * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int num = 10;
	// declare an int reference and set it to the int variable above
	int& ref = num;

	// output the int variable
	cout << "Before: " << num << endl;

	// set the int reference to some number
	ref = 5;
	// output the int variable
	cout << "After: " << num << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	cout << "the int variable changed from 10 to 5." << endl;
	// output the address of the int variable
	cout << "Address num: " << &num << endl;
	// output the address of the int reference
	cout << "Address ref: " << &ref << endl;
	// are the addresses the same or different? (insert answer)
	cout << "The addresses are exactly the same." << endl;

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	square(num);
	newSquare(num);

	// output the int variable to the console
	cout << "Squared: " << num << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take an int reference
	cout << "Squared Reference: " << num << endl;
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int *point = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	point = &num;

	// output the value of the pointer
	cout << "Pointer Value: " << point << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	cout << "The same address that the int variable and the reference outputted." << endl;
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "Dereference Point: " << *point << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(point);
	
	// output the dereference pointer
	cout << "Deref Point Again: " << *point << endl;
	// output the int variable created in the REFERENCE section
	cout << "Int Var: " << num << endl;
	// did the int variable's value change when using the pointer?
	cout << "Yes, it changed from 25 (5 * 5), to 50 (25 * 2)" << endl;

}