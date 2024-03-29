// CharacterAssassination.cpp : This file contains the 'main' function. Program execution begins and ends there. I am the alpha and omega...
//

#include <iostream>
#include <ctime>

// Main into the process
// argc - Number of arguments passed into the process
// argv - values to those arguments ** Note ** First argument passed will always be the path of this process
int main(int argc, char *argv[])
{
	std::cout << "You have entered " << (argc - 1) << " arguments:" << "\n";

	// Seed the random function
	srand((unsigned int)time(0));

	// Loop through all the arguments, skipping the first
	for (int i = 1; i < argc; i++)
	{
		// Get the string length of the current argument
		int len = strlen(argv[i]);
		// Print out the result of the current argument
		std::cout << "Word entered is \"" << argv[i] << "\"" << "\n";

		// Print out the number of letters that make up this string
		std::cout << "There are " << /*sizeof(argv[i])*/ len << " letters in this" << "\n";

		// Get a random number inside the size of the length of the string
		int r = rand() % /*sizeof(argv[i])*/len;
		std::cout << "Now to assassinate letter number " << r << "\n";

		// Start off by inserting this string into a "
		std::cout << "\"";
		for (int j = 0; j < /*sizeof(argv[i])*/len; j++)
		{
			// Print only the letters that aren't being assassinated
			if (j != r)
				std::cout << argv[i][j];
		}

		// End the print with another "
		std::cout << "\"" << "\n";
	}

	return 0;
}
