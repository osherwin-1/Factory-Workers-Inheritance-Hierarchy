#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
	double monthlyBonus;
	int requiredTrainingHours;
	int attendedTrainingHours;

public:
	TeamLeader();
	TeamLeader(string n, string num, string date, int s, double rate, double bonus, int reqHours, int attHours);
	void setMonthlyBonus(double bonus);
	void setRequiredTrainingHours(int hours);
	void setAttendedTrainingHours(int hours);
	double getMonthlyBonus() const;
	int getRequiredTrainingHours() const;
	int getAttendedTrainingHours() const;
	void printTeamLeader() const;
};
#endif
