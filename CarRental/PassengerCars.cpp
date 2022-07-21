#include "PassengerCars.h"

void PassengerCar::CarBrandList()
{
	system("cls");
	std::cout << "======================================" << std::endl;
	std::cout << "\tFollowing Passenger Car are available:" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;

	std::cout << "\t 1. BMW" << std::endl;
	std::cout << "\t 2. Toyota" << std::endl;
	std::cout << "\t 3. KIA" << std::endl;
	std::cout << "\t 4. Ford" << std::endl;

	std::cout << "Enter the number of the brand you like";
	std::cin >> IDPassengerCarsMark;
	if (IDPassengerCarsMark == 1 && IDPassengerCarsMark <= 4) {
		CarModelList();
	}
}

void PassengerCar::CarModelList()
{
	switch (IDPassengerCarsMark)
	{
	case 1:
		system("cls");
		std::cout << "======================================" << std::endl;
		std::cout << "\tFollowing model BMW are available:" << std::endl;
		std::cout << "======================================" << std::endl << std::endl;

		std::cout << "1. BMW Series 3" << std::endl;
		std::cout << "2. BMW Series x5" << std::endl;
		std::cout << "3. BMW Series x1" << std::endl;
		std::cout << "4. BMW Series x5M" << std::endl;

		std::cout << "Enter the number of the brand you like";
		std::cin >> IDPassengerCarsModel;
		break;
	case 2:
		system("cls");
		std::cout << "======================================" << std::endl;
		std::cout << "\tFollowing model Toyota are available:" << std::endl;
		std::cout << "======================================" << std::endl << std::endl;

		std::cout << "1. Toyota Corolla" << std::endl;
		std::cout << "2. Toyota RAV4" << std::endl;
		std::cout << "3. Toyota Camry" << std::endl;
		std::cout << "4. Toyota C-HR" << std::endl;

		std::cout << "Enter the number of the brand you like";
		std::cin >> IDPassengerCarsModel;
		break;
	case 3:
		system("cls");
		std::cout << "======================================" << std::endl;
		std::cout << "\tFollowing model KIA are available:" << std::endl;
		std::cout << "======================================" << std::endl << std::endl;

		std::cout << "1. KIA K5" << std::endl;
		std::cout << "2. KIA Sportage" << std::endl;
		std::cout << "3. KIA Rio" << std::endl;
		std::cout << "4. KIA Stinger" << std::endl;

		std::cout << "Enter the number of the brand you like";
		std::cin >> IDPassengerCarsModel;
		break;
	case 4:
		system("cls");
		std::cout << "======================================" << std::endl;
		std::cout << "\tFollowing model Ford are available:" << std::endl;
		std::cout << "======================================" << std::endl << std::endl;

		std::cout << "1. Ford Focus" << std::endl;
		std::cout << "2. Ford Mondeo" << std::endl;
		std::cout << "3. Ford Explorer" << std::endl;
		std::cout << "4. Ford ranger" << std::endl;

		std::cout << "Enter the number of the brand you like";
		std::cin >> IDPassengerCarsModel;
		break;
	default:
		break;
	}
}
