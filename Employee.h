#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	string idNumber;
	string hireDate;
public:
    // Constructors
    Employee();
    Employee(string n, string num, string date);

    // Mutators
    void setName(string n);
    void setEmployeeNumber(string num);
    void setHireDate(string date);

    // Accessors
    string getName() const;
    string getEmployeeNumber() const;
    string getHireDate() const;

    // Print function
    void printEmployee() const;
};

#endif
