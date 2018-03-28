//MadLibs
//3/27/2018
//Author: Austin Richards

#include <iostream>
#include <string>
int main()
{
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;
	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cTheResultOfaMinusB;
	

	std::cout << "Welcome to my MADLIB!!. \n\n";
	std::cout << "Please enter your favorite color >>>" << std::endl;
	std::cin >> color;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> wordEst;
	std::cout << "Enter a body part plural >>>" << std::endl;
	std::cin >> bodyPartPlural;
	std::cout << "Enter an animal >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a noun >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a plural noun >>>" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;
	cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;

	std::cout << "The "<< color << "Dragon is the " << wordEst << " Dragon of all. It has " << cTheResultOfaMinusB << std::endl;
	std::cout << bodyPartPlural << " . His name is " << noun << " and he is the king of the " << pluralNoun << "." << std::endl;
	std::cout << "His favorite animal is the " << animal << std::endl;

	system("Pause");
	return 0;
}