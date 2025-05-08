#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    int numEmployees;
    cout << "Number of Employees (max 5): ";
    cin >> numEmployees;

    if (numEmployees > 5) numEmployees = 5;

    Employee employees[5];
    for (int i = 0; i < numEmployees; i++) {
        cout << "\nEnter details for Employee" << (i + 1) << ":\n";
        employees[i].Read();
    }

    cout << "\n--- Payroll Summary ---\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i].Write();
    }

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

    cout << "\nEmployee Payroll Summary\n";
    cout << "-------------------------------\n";
    cout << "Name: " << name << " " << initial << ".\n";
    cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    cout << "Zipcode: " << zipcode << "\n";
    cout << "Hourly Wages: $" << wage << " per hour\n";
    cout << "Total Hours Worked: " << totalHours << " hours\n";
    cout << "Gross Income: $" << grossIncome << "\n";
    cout << "Tax Amount: $" << taxAmount << "\n";
    cout << "Net Income: $" << netIncome << "\n";


}