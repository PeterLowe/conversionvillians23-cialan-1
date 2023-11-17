//Cialan Patterson

#include <iostream>
char printMenu();

int main()
{

	return 0;
}

char printMenu()
{
	char choice = ' ';
	std::cout << "Please enter an upper case letter to convert from left to right and lower to convert from right to left" << std::endl;

	std::cout << "[D] Mpg <---> l/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cin >> choice;
	return choice;
}