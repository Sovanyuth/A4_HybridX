#include "car.h"
#ifndef GASOLINECAR_H
#define GASOLINECAR_H
#include "string"
using namespace std;

class GasolineCar : virtual public Car
{
public:
	GasolineCar();

	string Drive();
	double FuelEfficiency();
	string ChargeBattery() override;
	string Refuel();
	string SwitchMode() override;
};


#endif // 