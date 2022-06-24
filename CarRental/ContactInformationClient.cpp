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
