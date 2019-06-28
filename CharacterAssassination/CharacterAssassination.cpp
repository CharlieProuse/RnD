// CharacterAssassination.cpp : This file contains the 'main' function. Program execution begins and ends there. I am the alpha and omega...
//

#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "You have entered " << (argc - 1) << " arguments:" << "\n";

	for (int i = 1; i < argc; ++i)
	{
		std::cout << "Word entered is \"" << argv[i] << "\"" << "\n";

		std::cout << "There are " << sizeof(argv[i]) << " letters in this" << "\n";

		int r = rand() % sizeof(argv[i]);
		std::cout << "Now to assassinate letter number " << r << "\n";

		std::cout << "\"";
		for (int j = 0; j < sizeof(argv[i]); j++)
		{
			if (j != r)
				std::cout << argv[i][j];
		}

		std::cout << "\"" << "\n";
	}

	return 0;
}
