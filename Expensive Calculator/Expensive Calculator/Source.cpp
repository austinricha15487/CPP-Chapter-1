//Expensive Calculator
//3/27/2018
//Author: Austin Richards


#include<iostream>

int main()
{
	int selection;
	
	double num1;
	double num2;
	double answer;

	
	std::cout << "Welcome to the super expensive calculator, Please enter the first number" << std::endl;
	std::cin >> num1;
	std::cout << "Enter your second number" << std::endl;
	std::cin >> num2;
	std::cout << "Please select an operation. 1 for addition, 2 for subtraction, 3 for division, 4 for multiplication, and 5 for modulus." << std::endl;
	std::cin >> selection;
	//Select which operation to use
	if (selection == 1)
	{
		answer = num1 + num2;
	}
	if (selection == 2)
	{
		answer = num1 - num2;
	}
	if (selection == 3)
	{
		answer = num1 / num2;
	}
	if (selection == 4)
	{
		answer = num1 * num2;
	}

	if (selection >= 5)
	{
		std::cout << "This isnt an operation" << std::endl;
	}
	//Display answer
	std::cout << "The answer is " << answer << std::endl;
	
	system("Pause");
	return 0;
}