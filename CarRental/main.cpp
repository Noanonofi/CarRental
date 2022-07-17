#include <iostream>
#include "Authorization.h"
#include "ProfileClientList.h"

int main()
{
	setlocale(0, "");
	Authorization auth;
	ProfileClientList list;

	list.addClient("Eenkloppen", "WrongPasswo", "anonofi@gmail.com");

	auth.RegistrartionSystem();
}

