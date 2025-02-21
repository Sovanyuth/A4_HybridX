#include "electricCar.h"

ElectricCar::ElectricCar()
{
}

string ElectricCar::Drive()
{
	return "Drive ElectricCar";
}

string ElectricCar::ChargeBattery()
{
	return "ChargeBattery ElectricCar";
}

double ElectricCar::FuelEfficiency()
{
	return 10;
}

string ElectricCar::Refuel()
{
	return "Electric Car Can't Refuel";
}

string ElectricCar::SwitchMode()
{
	return "Electric Car don't have switch mode";
}