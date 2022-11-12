// ConsoleAppFunWithCoPilot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// create DrawCat identifier
void DrawCat();
char input;
char _getch();

// create a Main function
void main()
{
// draw the cat
	DrawCat();

	input = _getch();

// if input is Y draw cat again
 if (input == 'Y' || input == 'y')
	{
		main();
	}
// if input is not Y clear the screen and run main()
 else
 {
	 system("cls");
	 main();
 }

 return;
}	

// create a function to get keyboard input and output the last key pressed to input
char _getch()
{
	char input;
	std::cin >> input;
	return input;
}

// create a function called "DrawCat"
void DrawCat()
{
	// draw an entire cat on the screen
	std::cout << " /\\_/\\\n";
	std::cout << "( o.o )\n";
	std::cout << " > ^ <\n";
	// draw the rest of the cat
	std::cout << " /   \\\n";
	std::cout << "/     \\\n";
	std::cout << "-------\n";
	// draw the cat tail
	std::cout << " | | \n";
	std::cout << " | | \n";
	std::cout << " | | \n";
	
}