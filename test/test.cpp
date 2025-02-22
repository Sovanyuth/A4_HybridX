#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "car.h"
#include "gasolineCar.h"
#include "electricCar.h"
#include "hybridCar.h"

// Testcases, verifying implementations.
TEST_CASE("Main Section", "[ChargeBattery][valid]")
{
	// Creating instances using pointers
	ElectricCar* eCar = new ElectricCar();
	GasolineCar* gCar = new GasolineCar();
	HybridCar* hCar = new HybridCar();

	// Testing all the methods to see if they return the expected results.
	REQUIRE(eCar->ChargeBattery() == "ChargeBattery ElectricCar");
	REQUIRE(gCar->ChargeBattery() == "GasolineCar Can't Charge Battery");
	REQUIRE(hCar->ChargeBattery() == "ChargeBattery HybridCar");

	REQUIRE(eCar->FuelEfficiency() == 10.0);
	REQUIRE(gCar->FuelEfficiency() == 10.0);
	REQUIRE(hCar->FuelEfficiency() == 10.0);

	REQUIRE(eCar->Drive() == "Drive ElectricCar");
	REQUIRE(gCar->Drive() == "Drive GasolineCar");
	REQUIRE(hCar->Drive() == "Drive HybridCar");

	REQUIRE(eCar->Refuel() == "Electric Car Can't Refuel");
	REQUIRE(gCar->Refuel() == "Refuel GasolineCar");
	REQUIRE(hCar->Refuel() == "Refuel HybridCar");

	delete eCar;
	delete gCar;
	delete hCar;
}