#include "PassengerCars.h"

void PassengerCar::addCar(const std::string car)
{
	carlist.push_back(car);
}

void PassengerCar::standartListCar()
{
	carlist.reserve(10);
	carlist.push_back("BMW");
	carlist.push_back("Skoda");
	carlist.push_back("Toyota");
	carlist.push_back("KIA");
	carlist.push_back("Renault");
	carlist.push_back("Mazda");
	carlist.push_back("Ford");
}
