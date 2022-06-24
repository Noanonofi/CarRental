#include "ContactInformationClient.h"

ContactInformationClient::ContactInformationClient() {}

ContactInformationClient::ContactInformationClient
(
	const std::string& nameClient, 
	const std::string& surmameClient, 
	const std::string& patronymicClient, 
	const unsigned int& phoneNumberClient, 
	const unsigned int& pasportDataClient
)
	:nameClient{ nameClient },
	surmameClient{ surmameClient },
	patronymicClient{ patronymicClient },
	phoneNumberClient{ phoneNumberClient },
	pasportDataClient{ pasportDataClient } {}

void ContactInformationClient::setName(const std::string& name)
{
	nameClient = name;
}

void ContactInformationClient::setSurmame(const std::string& surmame)
{
	surmameClient = surmame;
}

void ContactInformationClient::setPatronymic(const std::string& patronymic)
{
	patronymicClient = patronymic;
}

void ContactInformationClient::setPhoneNumber(const unsigned int& phoneNumber)
{
	phoneNumberClient = phoneNumber;
}

void ContactInformationClient::setPasportData(const unsigned int& pasportData)
{
	pasportDataClient = pasportData;
}

std::string ContactInformationClient::getName() const
{
	return nameClient;
}

std::string ContactInformationClient::getSurmame() const
{
	return surmameClient;
}

std::string ContactInformationClient::getPatronymic() const
{
	return patronymicClient;
}

unsigned int ContactInformationClient::getPhoneNumberClient() const
{
	return phoneNumberClient;
}

unsigned int ContactInformationClient::getPasportDataClient() const
{
	return pasportDataClient;
}
