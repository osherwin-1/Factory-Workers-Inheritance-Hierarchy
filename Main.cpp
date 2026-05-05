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
		// Production Worker
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
        // Shift Supervisor
        else if (option == 2) {
			double salary, bonus;
			string name, id, date;
            int shift;
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
			// Salary
			cout << "Enter salary: ";
			cin >> salary;
			// Bonus
			cout << "Enter bonus: ";
			cin >> bonus;
            try {
                cout << "------------------------------" << endl;
                ShiftSupervisor supervisor(name, id, date, salary, bonus);
                supervisor.printShiftSupervisor();
                cout << "------------------------------" << endl;
            }
            catch(...) {
                cout << "Unexpected error creating shift supervisor.\n";
			}

        }
        // Team Leader
        else if (option == 3) {
			int reqHours, attHours, shift;
			double pay, bonus;
			string name, id, date;
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
            // Bonus
			cout << "Enter monthly bonus: ";
			cin >> bonus;
            cin.ignore();
            // Training Hours
			cout << "Enter required training hours: ";
			cin >> reqHours;
			cout << "Enter attended training hours: ";
			cin >> attHours;
            cin.ignore();
            // Create final object
            try {
                TeamLeader t(name, id, date, shift, pay, bonus, reqHours, attHours);
                cout << "------------------------------" << endl;
                cout << "Employee Created Successfully" << endl;
                t.printTeamLeader();
                cout << "------------------------------" << endl;
            }
            catch (...) {
                cout << "Unexpected error creating worker.\n";
            }
        }
    }
}
