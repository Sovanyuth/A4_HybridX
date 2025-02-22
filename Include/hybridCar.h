#include "electricCar.h"
#include "gasolineCar.h"
#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H
#include "string"
using namespace std;

// Inheriting from both classes, which are both pure virtual so I can avoid ambiguity for the "multiple inheritance issue"
class HybridCar : public ElectricCar, public GasolineCar
{
public:
	HybridCar();

	// No override needed since i am inheriting from 2 virtual inheritance of a pure virtual base
	string Drive();
	string ChargeBattery();
	double FuelEfficiency();
	string Refuel();
	string SwitchMode();
};


#endif // !1