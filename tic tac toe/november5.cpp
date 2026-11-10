
#include <iostream>
#include "TicTacToe.h"

void demoPassByREFERENCE()
{
    int a = 123;

    int& aliasOfA = a; // Reference variable

    std::cout << "The value of a is: " << a << std::endl;
    std::cout << "The value of the COPY of a is: "
              << aliasOfA << std::endl;

    // Update the value of a
    a = 456;

    std::cout << "The UPDATED value of a is: "
              << a << std::endl;
    std::cout << "The value of the COPY of a is: "
              << aliasOfA << std::endl;
}

int main()
{
    // demoPassByREFERENCE();

    std::vector<std::vector<std::string>> ticTacToeGrid(
        3, std::vector<std::string>(3)
    );

    // Creates an empty 2D vector of size 3 x 3

    TicTacToe::playGame(ticTacToeGrid);

    return 0;
}
