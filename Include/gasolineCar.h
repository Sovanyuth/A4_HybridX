#include "car.h"
#ifndef GASOLINECAR_H
#define GASOLINECAR_H
#include "string"
using namespace std;

class GasolineCar : public Car
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