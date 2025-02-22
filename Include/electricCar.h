#include "car.h"
#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "string"
using namespace std;

// Also implementing virtual inheritance which to also avoid ambiguity when hybrid cars inherits from both electric and 
// gasoline
class ElectricCar : virtual public Car 
{
public:
	ElectricCar();

	// No override needed since i am inheriting from the pure virtual base class
	string Drive();
	string ChargeBattery();
	double FuelEfficiency();
	string Refuel();
	string SwitchMode();
};


#endif // !1