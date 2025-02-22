#ifndef CAR_H
#define CAR_H
#include "string"
using namespace std;

// Implementing a pure virtual class as a skeleton for all other car classes. This will need to be override by all other classes
class Car 
{
public:
	virtual string Drive() = 0;
	virtual double FuelEfficiency() = 0;
	virtual string ChargeBattery() = 0;
	virtual string Refuel() = 0;
	virtual string SwitchMode() = 0;
};

#endif // !CAR_H