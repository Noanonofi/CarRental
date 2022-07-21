#pragma once
class ICar
{
public:
	virtual void CarBrandList() = 0;
	virtual void CarModelList() = 0;
	virtual void CharacteristicsOfTheMachines() = 0;
	virtual ~ICar(){}
protected:
	/**
	* Cars
	* @param	choosingCarModel	The parameter responsible for choosing a specific model
	* @param	choosingCarBrand	The parameter responsible for choosing the brand of the car
	*/
	int choosingCarModel;
	int choosingCarBrand;
};