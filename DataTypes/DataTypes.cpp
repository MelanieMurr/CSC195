#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter first name: ";
    cin >> name;
    char initial;
    cout << "Enter initial of last name: ";
    cin >> initial;
    short age;
    cout << "Enter age: ";
    cin >> age;
    bool isAdult;
    isAdult = (age >= 18);
    unsigned int zipcode;
    cout << "Enter zipcode: ";
    cin >> zipcode;
    float wage;
    cout << "Enter hourly wage: ";
    cin >> wage;
    short daysWorked;
    cout << "Enter number of days worked (max 7): ";
    cin >> daysWorked;
    float hoursWorkedPerDay[7];
    const float TAX = 0.1f;

    float totalHours = 0;
    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked for the day " << (i + 1) << ": ";
        cin >> hoursWorkedPerDay[i];

        totalHours += hoursWorkedPerDay[i];
    }

    float grossIncome = totalHours * wage;
    float taxAmount = grossIncome * TAX;
    float netIncome = grossIncome - taxAmount;


}