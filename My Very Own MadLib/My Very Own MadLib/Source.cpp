//Madlib
// 3/28/2018
// Author: Austin Richards
#include <iostream>
#include <string>

int main()
{
	std::string color;
	std::string adjective;
	std::string verb;
	std::string noun;
	std::string pluralNoun;

	int firstNumber;
	int secondNumber;
	int finalNumber; 

	std::cout << "Welcome to My Very Own Madlib" << std::endl;
	std::cout << "Enter a color" << std::endl;
	std::cin >> color;
	std::cout << "Enter an adjective" << std::endl;
	std::cin >> adjective;
	std::cout << "Enter a verb" << std::endl;
	std::cin >> verb;
	std::cout << "Enter a Noun" << std::endl;
	std::cin >> noun;
	std::cout << " Enter a plural noun" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter the first number" << std::endl;
	std::cin >> firstNumber;
	std::cout << "Enter the Second Number" << std::endl;
	std::cin >> secondNumber;
	finalNumber = firstNumber % secondNumber;

	std::cout << "The Monster of the dungeon was very " << color << " and he loved to  " << verb << " as many thing as possible. " << std::endl;
	std::cout << "He had as many as " << finalNumber << pluralNoun << std::endl;
	std::cout << " His name was " << noun << " and was acting like a " << adjective << std::endl;

	system("Pause");
	return 0;
}