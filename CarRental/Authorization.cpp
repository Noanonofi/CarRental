#include "Authorization.h"

void Authorization::RegistrartionSystem()
{
	std::cout << "======================================" << std::endl;
	std::cout << "\tCar Rental System" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;
	std::cout << "Register an account:" << std::endl;

	std::cout << "Enter your login: ";
	std::cin >> login;
	std::cout << "\nCheck...." << login << std::endl << std::endl;
	Sleep(500);
	if (checkCorrInput.checkCorrInputLogin(login)) {
		std::cout << "Login is correct" << std::endl << std::endl;
	} else std::cout << "Login is uncorrect, maybe login lenght < 5 symbol";
	createUser.setLoginClient(login);
	std::cout << "Enter your password: ";
	std::cin >> password;

	std::cout << "\nCheck...." << password << std::endl << std::endl;
	Sleep(500);

	if (checkCorrInput.checkCorrInputPassword(password)) {
		std::cout << "Password is correct" << std::endl;
	} else std::cout << "Password is uncorrect, maybe login lenght < 8 symbol";
}

void Authorization::AuthorizationSystem()
{
	std::cout << "======================================" << std::endl;
	std::cout << "\tCar Rental System" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;
	std::cout << "Sing in account:" << std::endl;

	std::string SingInLogin, SingInPassword;

	std::cout << "Enter your login: ";
	std::cin >> SingInLogin;

	std::cout << "Enter your password: ";
	std::cin >> SingInPassword;

	std::cout << "\nCheck...." << "Login" << "Password" << std::endl << std::endl;
	Sleep(500);

	if (SingInLogin == login && SingInPassword == password) {
		std::cout << "Login and password is correct!" << std::endl;
	}
	else {
		std::cout << "Login or password is uncorrect!" << std::endl;
	}

}
