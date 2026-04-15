#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
	int shift;
	double hourlyPayRate;

public:
	ProductionWorker();
	ProductionWorker(string n, string num, string date, int s, double rate);
	
	void setShift(int s);
	void setHourlyPay(double rate);

	int getShift() const;

	double getHourlyPay() const;

	void printProductionWorker() const;
};
#endif
