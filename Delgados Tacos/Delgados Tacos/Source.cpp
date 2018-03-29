// Project: Delgados Tacos
// Date: 3/29/2018
// Author: Austin Richards

#include <iostream>
#include <string>

int main()
{
	//variables for customer input
	int numOfTacos;
	int numOfBurritos;
	int numOfSupremes;
	int numOfOlays;
	int numOfDrinks;
	//Price of each menu item
	double priceOfTacos= 7.00;
	double priceOfBurritos = 3.00;
	double priceOfSupremes = 2.00;
	double priceOfOlays = 1.00;
	double priceOfDrinks = 1.00;
	double finalPrice;
	
	/*priceOfTacos = numOfTacos * 7.00;

	priceOfBurritos = numOfBurritos * 3.00;

	priceOfSupremes = numOfSupremes * 2.00;

	priceOfOlays = numOfOlays * 1.00;

	priceOfDrinks = numOfDrinks * 1.00;*/

	//finalPrice = priceOfTacos + priceOfBurritos + priceOfSupremes + priceOfOlays + priceOfDrinks;
	//Dope Taco Truck
	std::cout << "/////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "//                                                                                     //" << std::endl;
	std::cout << "//          ////////              ////////    ''      ////////////////////             // ///////////////////////             " << std::endl;
	std::cout << "//                  /            /                   /                                 //                       /" << std::endl;
	std::cout << "//                   /          /                     /                                //                       /" << std::endl;
	std::cout << "//                    /        /                       /                               //                       /" << std::endl;
	std::cout << "//                     /      /                         //////////////////             //                       /" << std::endl;
	std::cout << "//                      /    /                                            /            //                       /" << std::endl;
	std::cout << "//                       /  /                                             /            // //////////////////////   " << std::endl;
	std::cout << "///////////////////////// // //// /////////////////////////////   /////////////////    //" << std::endl;
	std::cout << "                 /       /        /                            //             //     " << std::endl;
	std::cout << "               //////     ////                            //////////////////       " << std::endl;
	
		
	if (numOfDrinks = 5)
	{
		priceOfDrinks = .50;
	}
	if (numOfBurritos = 7)
	{
		priceOfBurritos = .89;
	}
	if (numOfOlays = 10)
	{
		priceOfOlays = .19;
	}
	if (numOfSupremes = 2)
	{
		priceOfSupremes = 1.59;
	}
	if (numOfTacos = 15)
	{
		priceOfTacos = 16.79;
	}

	//prompts the customer to input the number of each item they want to eat
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
	
	//Calculates final price and returns values input by customer
	finalPrice = (priceOfTacos*numOfTacos) + (priceOfBurritos*numOfBurritos) + (priceOfSupremes*numOfSupremes) + (priceOfOlays*numOfOlays) + (priceOfDrinks*numOfDrinks);
	std::cout << "Okay sir, so today we have " << numOfBurritos << " burritos and " << numOfTacos << " tacos and " << std::endl;
	std::cout << numOfSupremes << " supreme tacos and " << numOfOlays << " olays and " << numOfDrinks << " drinks today. " << std::endl;
	std::cout << "Okay sure your total today will be " << finalPrice << " bucks trashcan. " << std::endl;

	
	system("Pause");
	return 0;
}