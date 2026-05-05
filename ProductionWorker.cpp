#include "ProductionWorker.h"

// ---- Constructors ----

ProductionWorker::ProductionWorker() : Employee() { // Default constructor for production worker
	shift = 1; // Day shift by default
	hourlyPay= 0.0;
}

ProductionWorker::ProductionWorker(string n, string num, string date, int s, double rate) : Employee(n, num, date) { // Constructor with parameters for production worker
	// Validate shift
	if (s != 1 && s != 2) {
		throw InvalidShift();
	}

	// Validate pay rate
	if (rate < 0) {
		throw InvalidPayRate();
	}
	
	shift = s;
	hourlyPay = rate;
}

// ---- Mutators ----

void ProductionWorker::setShift(int s) { // Mutator for shift
	if (s != 1 && s != 2) {
		throw InvalidShift();
	}
	shift = s;
}
void ProductionWorker::setHourlyPay(double rate) { // Mutator for hourly pay rate
	if (rate < 0) {
		throw InvalidPayRate();
	}
	hourlyPay = rate;
}

// --- Accessors ----

int ProductionWorker::getShift() const { // Accessor for shift
	return shift;
}

double ProductionWorker::getHourlyPay() const { // Accessor for hourly pay rate
	return hourlyPay;
}

// ---- Print Function ----

void ProductionWorker::printProductionWorker() const { // Function to print production worker information
	printEmployee(); // Call base class print function to display employee information
	cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl; // Display shift information
	cout << "Hourly Pay: $" << hourlyPay << endl; // Display hourly pay rate
}