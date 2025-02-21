#include "gasolineCar.h"
#include <iostream>
using namespace std;

GasolineCar::GasolineCar() {}

string GasolineCar::Drive()
{
	return "Drive GasolineCar";
}

double GasolineCar::FuelEfficiency()
{
	return 10;
}

string GasolineCar::Refuel() 
{
	return "Refuel GasolineCar";
}

string GasolineCar::ChargeBattery()
{
	return "GasolineCar Can't Charge Battery";
}

string GasolineCar::SwitchMode()
{
	return "GasolineCar Can't SwitchMode";
}