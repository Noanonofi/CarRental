#include "Client.h"

void Client::printName() const
{
	std::cout << "Name Client: " << contactInfoClient.getName();
}

void Client::printSurmame() const
{
	std::cout << "Surname Client: " << contactInfoClient.getSurmame();
}

void Client::printPatronymic() const
{
	std::cout << "Patronymic Client: " << contactInfoClient.getPatronymic();
}

void Client::printPhoneNumber() const
{
	std::cout << "Phone number Client: " << contactInfoClient.getPhoneNumberClient();
}

void Client::printPasportData() const
{
	std::cout << "Passport Data Client: " << contactInfoClient.getPasportDataClient();
}
//=========================
void Client::printLogin() const
{
	std::cout << "Login Clint: " << profileClient.getLogin();
}

void Client::printEmail() const
{
	std::cout << "Email Clint: " << profileClient.getEmail();
}
