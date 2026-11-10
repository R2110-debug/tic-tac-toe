
#pragma once

#include <string>
#include <vector>

namespace TicTacToe
{
    // Type alias for a 2D vector
    using twoDGrid = std::vector<std::vector<std::string>>;

    // Main function that runs the game
    void playGame(twoDGrid& ticTacToeGrid);

    // Helper function that updates the grid
    void updateGrid(
        twoDGrid& ticTacToeGrid,
        std::string theMove,
        std::string playerID
    );

    // Helper function that prints the grid
    void printTheGrid(twoDGrid& ticTacGrid);
}

