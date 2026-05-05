#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
#include <exception>
using namespace std;

int main()
{
	int option = 0;
	while (option != 4) {
		cout << "Select an employee type to create:" << endl;
		cout << "1. Production Worker" << endl;
		cout << "2. Shift Supervisor" << endl;
		cout << "3. Team Leader" << endl;
		cout << "4. Exit" << endl;
		cin >> option;
        if (option == 1) {
            string name, id, date;
            int shift;
            double pay;

            // Name
            cout << "\nEnter name: ";
            cin >> name;
            cin.ignore();
            // Employee Number
            while (true) {
                try {
                    cout << "Enter employee number (0-9999): ";
                    getline(cin, id);
                    Employee temp;
					temp.setEmployeeNumber(id); // temporary object to validate input
                    break;
                }
                catch (Employee::InvalidEmployeeNumber) {
                    cout << "Error: Invalid employee number (must be between 0 and 9999).\n";
                }
            }
            //Hire Date
            cout << "Enter hire date: ";
            getline(cin, date);
            // Shift 
            while (true) {
                try {
                    cout << "Enter shift (1 = Day, 2 = Night): ";
                    cin >> shift;
                    ProductionWorker temp;
                    temp.setShift(shift);
                    break;
                }
                catch (ProductionWorker::InvalidShift) {
                    cout << "Error: Shift must be 1 (Day) or 2 (Night).\n";
                }
                cin.clear();
                cin.ignore(1000, '\n');
            }
            // Pay Rate
            while (true) {
                try {
                    cout << "Enter hourly pay: ";
                    cin >> pay;
                    ProductionWorker temp;
                    temp.setHourlyPay(pay);
                    break;
                }
                catch (ProductionWorker::InvalidPayRate) {
                    cout << "Error: Pay rate cannot be negative.\n";
                }
                cin.clear();
                cin.ignore(1000, '\n');
            }
            cin.ignore();
            // Create final object
            try {
                ProductionWorker worker(name, id, date, shift, pay);
				cout << "------------------------------" << endl;
                cout << "Employee Created Successfully" << endl;
                worker.printProductionWorker();
                cout << "------------------------------" << endl;
            }
            catch (...) {
                cout << "Unexpected error creating worker.\n";
            }
        }

    }
}
