#include "electricCar.h"
#include "gasolineCar.h"
#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H
#include "string"
using namespace std;

class HybridCar : public ElectricCar, public GasolineCar
{
public:
	HybridCar();

	string Drive() override;
	string ChargeBattery() override;
	double FuelEfficiency() override;
	string Refuel() override;
	string SwitchMode();
};


#endif // !1