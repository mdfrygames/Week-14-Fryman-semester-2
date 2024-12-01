#include<iostream>
#include<string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string manufacturerName, int year) {
	manufacturer = manufacturerName;
	yearBuilt = year;
}

string Vehicle::getManufacturer() const {
	return manufacturer;
}

int Vehicle::getYear() const {
	return yearBuilt;
}

void Vehicle::setManufacturer(string manufacturerName) {
	manufacturer = manufacturerName;
}

void Vehicle::setYearBuilt(int year) {
	yearBuilt = year;
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << "\nYear built: " << yearBuilt << endl;
}