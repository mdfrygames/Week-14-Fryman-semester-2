#include<string>
#include<iostream>
#include "Truck.h"
#include "Vehicle.h"



using namespace std;

int Truck::getTowingCapacity() const {
	return towingCapacity;
}

void Truck::setTowingCapacity(int towingNumber) {
	towingCapacity = towingNumber;
}

void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}
