#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle {
	private:
		string manufacturer;
		int yearBuilt;
	public:
		Vehicle(string, int);
		string getManufacturer() const;
		int getYear() const;
		void setManufacturer(string);
		void setYearBuilt(int);
		virtual void displayInfo();
};

#endif 

