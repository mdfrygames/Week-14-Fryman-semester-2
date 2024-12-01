// Matthew Fryman
// CIS 1202 501
// December 1, 2024
#include<iostream>
#include<string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
	string manufacturerName;
	int year;
	int doors;
	int towingNumber;


	cout << "Vehicle Program\n\nVehicle:\nEnter the manufacturer: ";
	getline(cin, manufacturerName);
	cout << "Enter the year built: ";
	cin >> year;
	Vehicle vehicle(manufacturerName, year);
	vehicle.displayInfo();
	cin.ignore();

	cout << "\nCar:\nEnter the manufacturer: ";
	getline(cin, manufacturerName);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	Car car(manufacturerName, year, doors);
	car.displayInfo();
	cin.ignore();

	cout << "\nTruck:\nEnter the manufacturer: ";
	getline(cin, manufacturerName);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towingNumber;
	Truck truck(manufacturerName, year, towingNumber);
	truck.displayInfo();



	return 0;
}