#include <iostream>
//#include "CreateUser.h"
#include "ContactClientINFO.h"

int main()
{
	//CreateUser create("Vladislav", "Vinogradov", "Yurevich", "Anonofi", "WrongPassword", "anonofi@gmail.com");
	ContactClientINFO contact("My Name", "My Surname", "My Patronymic");

	std::string name = contact.getNameClient();
	std::string surname = contact.getSurnameClient();
	std::string patronymic = contact.getPatronymicClient();


	std::cout
		<< "Name: " << name << std::endl
		<< "Surname: " << surname << std::endl
		<< "Patronymic: " << patronymic << std::endl;
}

