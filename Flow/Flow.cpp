#include <iostream>

int main()
{
	int j;
	int i;
	char f = 'a';
	bool keepgoing = true;
	char answer;

	for(int loop = 0; loop < 10; loop++)
	{
		keepgoing = true;

		std::cout << loop << " " << std::endl;

		while(keepgoing)
		{

			std::cout << "Please insert first number" << std::endl;
			std::cin >> j;
			std::cout << "Please insert second number" << std::endl;
			std::cin >> i;


			if (i < j)
			{
				std::cout << "First number is greater than second number." << std::endl;
			}

			else if(i > j)
			{
				std::cout << "Second number is greater than first number." << std::endl;
			}
	
			else
			{
				std::cout << "First and second numbers are equal." << std::endl;
			}

			std::cout << "Compare another ? Y / N: ";
			std::cin >> answer;

			if (answer == 'N')
				keepgoing = false;
			else if (answer == 'Y')
				keepgoing = true;
			else
				keepgoing = true;
		}
	}
	return 0;
}