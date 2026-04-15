#include "ShiftSupervisor.h"

// ---- Constructors ----

ShiftSupervisor::ShiftSupervisor() : Employee() { // Default constructor for shift supervisor
	salary = 0.0;
	bonus = 0.0;
}

ShiftSupervisor::ShiftSupervisor(string n, string num, string date, double s, double b) : Employee(n, num, date) { // Constructor with parameters for shift supervisor
	salary = s;
	bonus = b;
}

// ---- Mutators ----

void ShiftSupervisor::setSalary(double s) { // Mutator for salary
	salary = s;
}

void ShiftSupervisor::setBonus(double b) { // Mutator for bonus
	bonus = b;
}

// ---- Accessors ----

double ShiftSupervisor::getSalary() const { // Accessor for salary
	return salary;
}

double ShiftSupervisor::getBonus() const { // Accessor for bonus
	return bonus;
}

// ---- Print Function ----

void ShiftSupervisor::printShiftSupervisor() const { // Function to print shift supervisor information
	printEmployee(); // Call base class print function to display employee information
	cout << "Salary: $" << salary << endl; // Display salary information
	cout << "Bonus: $" << bonus << endl; // Display bonus information
}