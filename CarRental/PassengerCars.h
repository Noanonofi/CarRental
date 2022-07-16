#pragma once
#include <iostream>
#include <vector>
#include "Car.h"

//enum class PassengerCarsLIST {
//	BMW = 1,
//	Skoda = 2,
//	Toyota = 3,
//	KIA = 4,
//	Renault = 5,
//	Mazda = 6,
//	Ford = 7
//};

class PassengerCar : public ICar
{
public:
	virtual void CarBrandList() override {
		std::cout << "Following Passenger Car are available: " << std::endl << std::endl;
		for (auto& it : carlist) {
			std::cout << it << std::endl;
		}
		std::cin >> IDPassengerCars;
		CarModelList();
	}
private:
	virtual void CarModelList() override {
		switch (IDPassengerCars)
		{
		case 1:

		default:
			break;
		}
	}
public:
	void addCar(const std::string car);
private:
	void standartListCar();
private:
	int IDPassengerCars;
	std::vector<std::string> carlist;
};

