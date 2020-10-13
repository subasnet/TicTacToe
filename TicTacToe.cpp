// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <SFML\Graphics.hpp>

#include <iostream>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main()
{
	sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tic-Tac-Toe");

	while (window.isOpen()) //Loop while window is open
	{
		sf::Event event; // creating event object.

		while (window.pollEvent(event)) // loop if any event presesnt.
		{
			switch(event.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
			}
		}

		window.clear();
		 // just testing.
		window.display();
	}

	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
