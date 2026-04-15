#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main()
{
	Employee worker; // Create an employee object

    worker.setName("Oliver McEmployee"); // Set worker values
    worker.setEmployeeNumber("12593");
	worker.setHireDate("10/19/2022");

	cout << " Employee Information:" << endl; // Display employee information
	cout << "Name: " << worker.getName() << endl;
	cout << "Employee Number: " << worker.getEmployeeNumber() << endl;
	cout << "Hire Date: " << worker.getHireDate() << endl;
	
	cout << "printEmployee() function output:" << endl; // Display employee information using print function
	worker.printEmployee();
	cout << "\n\n";

	ProductionWorker dayWorker("Oliver McDayWorker", "22341", "01/15/2018", 1, 20.00); // Create a daytime production worker object with parameters
	ProductionWorker nightWorker("Oliver McNightWorker", "22342", "02/20/2025", 2, 28.50); // Create a nighttime production worker object with parameters


	cout << "Daytime Production Worker Information:" << endl; // Display daytime production worker information
	dayWorker.printProductionWorker();
	cout << "\n\n";
	cout << "Nighttime Production Worker Information:" << endl; // Display nighttime production worker information
	nightWorker.printProductionWorker();
	cout << "\n\n";


	ShiftSupervisor supervisor("Oliver McSupervisor", "31469", "03/10/2015", 95000.00, 5000.00); // Create a shift supervisor object with parameters

	cout << "Shift Supervisor Information:" << endl; // Display shift supervisor information
	supervisor.printShiftSupervisor();
	cout << "\n\n";

	TeamLeader teamLeader("Oliver McTeamLeader", "41592", "04/25/2020", 1, 42.50, 300.00, 50, 25); // Create a team leader object with parameters
	cout << "Team Leader Information:" << endl; // Display team leader information
	teamLeader.printTeamLeader(); 
	cout << "\n\n";
	return 0;
}
