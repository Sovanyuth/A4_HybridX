#include "electricCar.h"
#include "gasolineCar.h"
#include "hybridCar.h"
#include "car.h"
#include <iostream>

int main() 
{
	ElectricCar* eCar = new ElectricCar();
	GasolineCar* gCar = new GasolineCar();
	HybridCar* hCar = new HybridCar();

	std::cout << eCar->Drive() << endl;
	std::cout << gCar->Drive() << endl;
	std::cout << hCar->Drive() << endl;

	std::cout << eCar->ChargeBattery() << endl;
	std::cout << gCar->Refuel() << endl;
	std::cout << hCar->SwitchMode() << endl;

	delete eCar;
	delete gCar;
	delete hCar;
}