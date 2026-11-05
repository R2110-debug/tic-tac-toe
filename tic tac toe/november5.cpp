// November5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"TicTacToe.h"

void demoPassByREFERENCE()
{
	int a = 123;

	int& aliasOfA = a; //DEEP copy! a "reference" variable

	std::cout << "The value of a is: " << a << std::endl;
	std::cout << "The value of the COPY of a is: " << aliasOfA << std::endl;


	//now decide to CHANGE (update) the value of a: 
	a = 456;
	std::cout << "The UPDATED value of a is: " << a << std::endl;
	std::cout << "The value of the COPY of a is: " << aliasOfA << std::endl;
}

int main()
{
	//demoPassByREFERENCE(); 


	std::vector<std::vector<std::string>> ticTacToeGrid(3, std::vector<std::string>(3));
	//what does the line above do? 
	//it makes an empty 2D array of size 3 x 3


	TicTacToe::playGame(ticTacToeGrid);


}