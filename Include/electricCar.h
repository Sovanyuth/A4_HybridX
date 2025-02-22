#include "car.h"
#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "string"
using namespace std;

class ElectricCar : virtual public Car 
{
public:
	ElectricCar();

	string Drive();
	string ChargeBattery() override;
	double FuelEfficiency();
	string Refuel() override;
	string SwitchMode() override;
};


#endif // !1