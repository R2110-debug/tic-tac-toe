
#include <iostream>
#include <vector>
#include <string>
#include "TicTacToe.h"

void demoPassByREFERENCE()
{
    int a = 123;

    int& aliasOfA = a;

    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of the COPY of a is: " << aliasOfA << std::endl;

    // Now change the value of a
    a = 456;

    std::cout << "The UPDATED value of a is: " << a << std::endl;
    std::cout << "The value of the COPY of a is: " << aliasOfA << std::endl;
}

int main()
{
    // demoPassByREFERENCE();

    std::string fillerCharacter = "*";

    // Create an empty 2D grid with 3 rows and 3 columns
    std::vector<std::vector<std::string>> ticTacToeGrid(
        3, std::vector<std::string>(3, fillerCharacter));

    // Create a TicTacToe object
    TicTacToe myGame;

    // Start the game
    myGame.playGame(ticTacToeGrid);

    return 0;
}
