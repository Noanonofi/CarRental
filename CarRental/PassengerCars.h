#pragma once
#include <iostream>
#include <vector>
#include "Car.h"

/*
* A temporary solution to the list of machines
*/
class PassengerCar : public ICar
{
public:
	virtual void CarBrandList() override;
private:
	virtual void CarModelList() override;
	void CharacteristicsOfTheMachines() override;
public:
	//void addCar(const std::string car);
private:
	//void standartListCar();
private:
	uint8_t IDPassengerCarsMark;
	uint8_t IDPassengerCarsModel;
};