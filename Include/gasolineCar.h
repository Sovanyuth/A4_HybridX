#include "car.h"
#ifndef GASOLINECAR_H
#define GASOLINECAR_H
#include "string"
using namespace std;

// This is the gasoline car class. This class will inherit from the car class. To avoid errors when hybrid class
// inherits from the gasoline and electric, i need to virtually inherit the car class.
class GasolineCar : virtual public Car
{
public:
	GasolineCar();

	// No override needed since i am inheriting from the pure virtual base class
	string Drive();
	double FuelEfficiency();
	string ChargeBattery();
	string Refuel();
	string SwitchMode();
};


#endif // 