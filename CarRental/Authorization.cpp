#include "Authorization.h"

Authorization::Authorization() {}

void Authorization::RegistrartionSystem()
{
	std::cout << "======================================" << std::endl;
	std::cout << "\tCar Rental System" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;
	std::cout << "Register an account:" << std::endl;

	//==============================================================================

	std::cout << "Enter your login: ";
	std::cin >> login;
	std::cout << "\nCheck...." << login << std::endl << std::endl;
	Sleep(500);

	if (list.searchLogin(login)) {
		std::cout << "Login is correct" << std::endl << std::endl;
		profileINFO.setLoginClient(login);
	} else std::cout << "Login is uncorrect, maybe login lenght < 5 symbol" << std::endl;

	//==============================================================================

	std::cout << "Enter your email: ";
	std::cin >> email;
	std::cout << "\nCheck...." << email << std::endl << std::endl;
	Sleep(500);

	if (list.searchEmail(email)) {
		std::cout << "Email is correct" << std::endl << std::endl;
		profileINFO.setLoginClient(email);
	} else std::cout << "Email is uncorrect, maybe email lenght < 5 symbol" << std::endl;

	//==============================================================================

	std::cout << "Enter your password: ";
	std::cin >> password;
	std::cout << "\nCheck...." << password << std::endl << std::endl;
	Sleep(500);

	if (checkCorrectInput.checkPasswordClient(password)) {
		std::cout << "Password is correct" << std::endl;
	} else std::cout << "Password is uncorrect, maybe login lenght < 8 symbol" << std::endl;
}

void Authorization::AuthorizationSystem()
{
	std::cout << "======================================" << std::endl;
	std::cout << "\tCar Rental System" << std::endl;
	std::cout << "======================================" << std::endl << std::endl;
	std::cout << "Sing in account:" << std::endl;

	//==============================================================================

	std::string SingInLogin, SingInPassword;

	std::cout << "Enter your login: ";
	std::cin >> SingInLogin;

	std::cout << "Enter your password: ";
	std::cin >> SingInPassword;

	//==============================================================================

	std::cout << "\nCheck...." << "Login" << "Password" << std::endl << std::endl;
	Sleep(500);

	//==============================================================================

	if (SingInLogin == login && SingInPassword == password) {
		std::cout << "Login and password is correct!" << std::endl;
	}
	else {
		std::cout << "Login or password is uncorrect!" << std::endl;
	}

}
