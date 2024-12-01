#ifndef TRUCK_H
#define TRUCK_H

#include<string>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
	int towingCapacity;
public:
	Truck(string manufacturer, int year, int towingNumber) : Vehicle(manufacturer, year) {
		towingCapacity = towingNumber;
	}
	int getTowingCapacity() const;
	void setTowingCapacity(int);
	virtual void displayInfo();
};


#endif

