#include<string>
#include<iostream>
#include "Car.h"
#include "Vehicle.h"



using namespace std;

int Car::getDoors() const {
	return doors;
}

void Car::setDoors(int numDoors) {
	doors = numDoors;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Doors: " << doors << endl;
}
