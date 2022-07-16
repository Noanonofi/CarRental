#include <iostream>
#include "CreateUser.h"


int main()
{
	nlohmann::ordered_json JSON;
	CreateUser create("My Name", "My Surname", "My Patronymic", "My Login", "My password", "My email@mail.mail");

	//create.Serialization(JSON);

	//create.Deserialization();
}

