#ifndef CAR_H
#define CAR_H

#include<string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
	private:
		int doors;
	public:
		Car(string manufacturer, int year, int doorNum) : Vehicle(manufacturer, year){
			doors = doorNum;
		}
		int getDoors() const;
		void setDoors(int);
		virtual void displayInfo();
};


#endif
