#include <iostream>
#include "Authorization.h"
#include "ProfileClientList.h"

int main()
{
	setlocale(0, "");
	Authorization auth;
	ProfileClientList list;

	list.addClient("TestLogin", "TestPassword", "test@gmail.com");

	auth.RegistrartionSystem();
	auth.RegistrartionSystem();
	auth.RegistrartionSystem();
}

