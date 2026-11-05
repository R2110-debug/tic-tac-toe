#pragma once

#include<string> 
#include<vector> 


namespace TicTacToe
{
	using twoDGrid = std::vector<std::vector<std::string>>; //making a "type alias" (for convenience and readability) 

	//this is the grid (the gameboard)



	//this function calls several other functions (helpers) and returns void (it just prints things)



	void playGame(twoDGrid& ticTacToeGrid); //PASS BY REFERENCE!!!!!1


	//this is a "helper" that is called by playGame (because playGame would be VERY complicated otherwise)
	void updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID);


	void printTheGrid(twoDGrid& ticTacGrid);
}
