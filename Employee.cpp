#include "Employee.h"

// ---- Constructors ----

Employee::Employee() { // Default employee constructor
	name = "";
	idNumber = "";
	hireDate = "";
}

Employee::Employee(string n, string num, string date) { // Employee constructor with parameters (Overloaded)
	name = n;
	idNumber = num;
	hireDate = date;
}

// ---- Mutators ----

void Employee::setName(string n) { // Mutator for employee name
	name = n;
}

void Employee::setEmployeeNumber(string num) { // Mutator for employee number
	idNumber = num;
}

void Employee::setHireDate(string date) { // Mutator for employee hire date
	hireDate = date;
}

// ---- Accessors ----

string Employee::getName() const { // Accessor for employee name
	return name;
}

string Employee::getEmployeeNumber() const { // Accessor for employee number
	return idNumber;
}

string Employee::getHireDate() const { // Accessor for employee hire date
	return hireDate;
}

// ---- Print Function ----

void Employee::printEmployee() const { // Function to print employee information
	cout << "Employee Name: " << name << endl;
	cout << "Employee Number: " << idNumber << endl;
	cout << "Hire Date: " << hireDate << endl;
}
