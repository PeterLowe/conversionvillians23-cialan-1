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
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimetres <---> Feet&Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;

	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cin >> choice;
	return choice;
}