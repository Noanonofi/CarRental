#pragma once
class ICar
{
public:
	virtual void CarBrandList() = 0;
	virtual void CarModelList() = 0;
	~ICar(){}
protected:
	int choosingCarModel;
	int choosingCarBrand;
};

