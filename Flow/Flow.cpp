#include <iostream>

int main()
{
	int j;
	int i;

	std::cout << "Please insert first number" << std::endl;
	std::cin >> j;
	std::cout << "Please insert second number" << std::endl;
	std::cin >> i;


	if (i < j)
	{
		std::cout << "Second number is greater than first." << std::endl;
	}

	else if(i > j)
	{
		std::cout << "First number is greater than second." << std::endl;
	}
	
	else
	{
		std::cout << "First and second numbers are equal." << std::endl;
	}

	return 0;
}