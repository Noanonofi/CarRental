#include <iostream>
#include "Authorization.h"
#include "ProfileClientList.h"
using std::cout;
using std::endl;

int main()
{
	setlocale(0, "");
	Authorization auth;
	ProfileClientList list;

	list.addClient("Eenkloppen", "WrongPasswo", "anonofi@gmail.com");

	auth.RegistrartionSystem();

}

