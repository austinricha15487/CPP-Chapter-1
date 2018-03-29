// Project: Delgados Tacos
// Date: 3/29/2018
// Author: Austin Richards

#include <iostream>
#include <string>

int main()
{
	int numOfTacos;
	int numOfBurritos;
	int numOfSupremes;
	int numOfOlays;
	int numOfDrinks;

	double priceOfTacos;
	double priceOfBurritos;
	double priceOfSupremes;
	double priceOfOlays;
	double priceOfDrinks;
	double finalPrice;
	priceOfTacos = numOfTacos * 7.00;
	priceOfBurritos = numOfBurritos * 3.00;
	priceOfSupremes = numOfSupremes * 2.00;
	priceOfOlays = numOfOlays * 1.00;
	priceOfDrinks = numOfDrinks * 1.00;
	finalPrice = priceOfTacos + priceOfBurritos + priceOfDrinks + priceOfSupremes + priceOfOlays;
	
	std::cout << "Welcome to Delgados Tacos! How many tacos would you like?" << std::endl;
	std::cin >> numOfTacos;
	std::cout << "Okay. How many Burritos would you like?" << std::endl;
	std::cin >> numOfBurritos;
	std::cout << "Okay. How many Supreme tacos would you like?" << std::endl;
	std::cin >> numOfSupremes;
	std::cout << "Okay. How many potato olays would you like?" << std::endl;
	std::cin >> numOfOlays;
	std::cout << "Okay. Now how many drinks would you like?" << std::endl;
	std::cin >> numOfDrinks;

	std::cout << "Okay sir, so today we have " << numOfBurritos << " burritos and " << numOfTacos << " tacos and " << std::endl;
	std::cout << numOfSupremes << "supreme tacos and " << numOfOlays << " olays and " << numOfDrinks << " drinks today. " << std::endl;
	std::cout << "Okay sure your total today will be " << finalPrice << " . " << std::endl;

	
	
	

	system("Pause");
	return 0;
}