#include "TeamLeader.h"

// ---- Constructors ----

TeamLeader::TeamLeader() : ProductionWorker() { // Default constructor for team leader
	monthlyBonus = 0.0;
	requiredTrainingHours = 0;
	attendedTrainingHours = 0;
}

TeamLeader::TeamLeader(string n, string num, string date, int s, double rate, double bonus, int reqHours, int attHours) : ProductionWorker(n, num, date, s, rate) { // Constructor with parameters for team leader
	monthlyBonus = bonus;
	requiredTrainingHours = reqHours;
	attendedTrainingHours = attHours;
}

// ---- Mutators ----

void TeamLeader::setMonthlyBonus(double bonus) { // Mutator for monthly bonus
	monthlyBonus = bonus;
}

void TeamLeader::setRequiredTrainingHours(int hours) { // Mutator for required training hours
	requiredTrainingHours = hours;
}

void TeamLeader::setAttendedTrainingHours(int hours) { // Mutator for attended training hours
	attendedTrainingHours = hours;
}

// ---- Accessors ----

double TeamLeader::getMonthlyBonus() const { // Accessor for monthly bonus
	return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const { // Accessor for required training hours
	return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const { // Accessor for attended training hours
	return attendedTrainingHours;
}

// ---- Print Function ----

void TeamLeader::printTeamLeader() const { // Function to print team leader information
	printProductionWorker(); // Call base class print function to display production worker information
	cout << "Monthly Bonus: $" << monthlyBonus << endl; // Display monthly bonus information
	cout << "Required Training Hours: " << requiredTrainingHours << endl; // Display required training hours information
	cout << "Attended Training Hours: " << attendedTrainingHours << endl; // Display attended training hours information
}
