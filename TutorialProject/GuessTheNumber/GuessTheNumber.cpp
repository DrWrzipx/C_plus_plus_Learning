#include <iostream>
#include "math.h";

int main()
{
	int answer = rand() % 100;
	int guess = 0;
	char moreGame;

	bool notguesses = true;

	while (notguesses)
	{
		std::cout << "Please try to find correct number." << std::endl;
		std::cin >> guess;

		if(guess == answer)
		{
			std::cout << "Your answer is correct." << std::endl;
			std::cout << "Would you like play again ? Y/N" << std::endl;
			std::cin >> moreGame;

			if (moreGame == 'Y')
				notguesses = true;
			else
				notguesses = false;
		}

		else if (guess > answer)
		{
			std::cout << "Too higher try, please try again." << std::endl;
			notguesses = true;
		}

		else if (guess < answer)
		{
			std::cout << "Too lower try, please try again." << std::endl;
			notguesses = true;
		}
	}


	return 0;
}