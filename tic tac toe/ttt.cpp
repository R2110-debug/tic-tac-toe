
#include "TicTacToe.h"

#include <iostream>
#include <string>

void TicTacToe::playGame(twoDGrid& ticTacToeGrid)
{
    std::cout << "Player X, enter your move: " << std::endl;
    std::cout << "Allowed moves are:" << std::endl;

    std::cout << "abc" << std::endl;
    std::cout << "def" << std::endl;
    std::cout << "ghi" << std::endl;

    std::string playerXMove;

    std::getline(std::cin, playerXMove);

    updateGrid(ticTacToeGrid, playerXMove, "X");

    // Show the updated grid
    printTheGrid(ticTacToeGrid);

    // Player O moves
    std::cout << std::endl << std::endl;
    std::cout << "Now player O" << std::endl;

    std::string playerOMove;

    std::getline(std::cin, playerOMove);

    updateGrid(ticTacToeGrid, playerOMove, "O");

    printTheGrid(ticTacToeGrid);
}


// Updates the grid based on the player's move
void TicTacToe::updateGrid(
    twoDGrid& ticTacToeGrid,
    std::string theMove,
    std::string playerID)
{
    if (theMove == "a")
    {
        ticTacToeGrid[0][0] = playerID;
    }
    else if (theMove == "b")
    {
        ticTacToeGrid[0][1] = playerID;
    }
    else if (theMove == "c")
    {
        ticTacToeGrid[0][2] = playerID;
    }
    else if (theMove == "d")
    {
        ticTacToeGrid[1][0] = playerID;
    }
    else if (theMove == "e")
    {
        ticTacToeGrid[1][1] = playerID;
    }
    else if (theMove == "f")
    {
        ticTacToeGrid[1][2] = playerID;
    }
    else if (theMove == "g")
    {
        ticTacToeGrid[2][0] = playerID;
    }
    else if (theMove == "h")
    {
        ticTacToeGrid[2][1] = playerID;
    }
    else if (theMove == "i")
    {
        ticTacToeGrid[2][2] = playerID;
    }
    else
    {
        std::cout << "Invalid move!" << std::endl;
    }
}


// Prints the Tic-Tac-Toe grid
void TicTacToe::printTheGrid(twoDGrid& ticTacGrid)
{
    for (int row = 0; row < ticTacGrid.size(); ++row)
    {
        for (int col = 0; col < ticTacGrid[row].size(); ++col)
        {
            if (ticTacGrid[row][col] == "")
            {
                std::cout << "-";
            }
            else
            {
                std::cout << ticTacGrid[row][col];
            }

            if (col < ticTacGrid[row].size() - 1)
            {
                std::cout << " | ";
            }
        }

        std::cout << std::endl;

        if (row < ticTacGrid.size() - 1)
        {
            std::cout << "---------" << std::endl;
        }
    }
}
