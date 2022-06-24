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
