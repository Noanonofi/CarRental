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

const std::string& ContactInformationClient::getName() const
{
	return nameClient;
}

const std::string& ContactInformationClient::getSurmame() const
{
	return surmameClient;
}

const std::string& ContactInformationClient::getPatronymic() const
{
	return patronymicClient;
}

const unsigned int& ContactInformationClient::getPhoneNumberClient() const
{
	return phoneNumberClient;
}

const unsigned int& ContactInformationClient::getPasportDataClient() const
{
	return pasportDataClient;
}
