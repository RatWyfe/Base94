#include <iostream>
#include <fstream>
#include <string>

int main()
{
	char getascii;
	const int iConstant = 94;
	std::string buildline = "";
	uint64_t quotient = 0;
	uint64_t Iremainder = 0;

	std::cout << "Enter a number: ";
	std::cin >> quotient;
	while (quotient != 0)
	{
		Iremainder = quotient % iConstant;
		quotient = quotient / iConstant;
		getascii = static_cast<char>(33 + Iremainder);
		buildline = getascii + buildline;
	}
	if (buildline == "") 
	{
		std::cout << "No value output";
	}
	else 
	{
		std::cout << buildline;
	}
	return 6;
}
