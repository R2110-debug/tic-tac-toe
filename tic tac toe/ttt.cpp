
#include"TicTacToe.h"

#include<iostream> 
#include<string>



void TicTacToe::playGame(twoDGrid& ticTacToeGrid)
{

	//how to stop this game? 

	std::cout << "Player X, enter your move: " << std::endl; 
	std::cout << "Allowed moves are:" << std::endl; 
	std::cout << "abc" << std::endl; //doing this prevents user from having to say 0, 0 or 1, 2, etc.
	std::cout << "def" << std::endl;
	std::cout << "hgi" << std::endl;
	//for () //probably NOT a good approach (definite loop) 
	bool isGameWon = false; 
	int moveCount = 0; 

	while (isGameWon == false) //while the game is not yet won, do the stuff in the body of the loop 
	{
		//(prompt players for moves)
		printTheGrid(ticTacToeGrid);

		std::cout << "Player X, enter your move: " << std::endl;
		std::cout << "Allowed moves are:" << std::endl;
		std::cout << "abc" << std::endl; //doing this prevents user from having to say 0, 0 or 1, 2, etc.
		std::cout << "def" << std::endl;
		std::cout << "hgi" << std::endl;

	std::string playerXMove; 
		std::string playerXMove;

	std::getline(std::cin, playerXMove);
		std::getline(std::cin, playerXMove);

	//ticTacToeGrid[0][0] = "X";
	updateGrid(ticTacToeGrid, playerXMove, "X");
		//ticTacToeGrid[0][0] = "X";
		updateGrid(ticTacToeGrid, playerXMove, "X");
		moveCount = moveCount + 1; //alternatively: moveCount++; 

	//after X makes a move, we should show O what the updated grid looks like: 
	printTheGrid(ticTacToeGrid);
		if (moveCount >= 5) //alternatively: moveCount > 4
		{
			isGameWon = checkForWin(ticTacToeGrid);

			if (isGameWon == true)
			{
				break; //exits the loop
			}
		}

		//after X makes a move, we should show O what the updated grid looks like: 
		std::cout << "After the player X made a move, the grid looks like:" << std::endl;
		printTheGrid(ticTacToeGrid);

		/*now player O moves :*************************************************************/
		std::cout << std::endl << std::endl; //makes 2 blank lines for spacing
		std::cout << "Now player O" << std::endl;
		std::string playerOMove;

		std::getline(std::cin, playerOMove);

	/*now player O moves :*************************************************************/
	std::cout << std::endl << std::endl; //makes 2 blank lines for spacing
	std::cout << "Now player O" << std::endl; 
	std::string playerOMove;
		updateGrid(ticTacToeGrid, playerOMove, "O");
		moveCount++;

		if (moveCount >= 5) //alternatively: moveCount > 4
		{
			isGameWon = checkForWin(ticTacToeGrid);

			if (isGameWon == true)
			{
				break;
			}
		}

	std::getline(std::cin, playerOMove);

	//ticTacToeGrid[0][0] = "X";
	updateGrid(ticTacToeGrid, playerOMove, "O");
		printTheGrid(ticTacToeGrid);

	printTheGrid(ticTacToeGrid); 


	}

} //end of the playGame function

void TicTacToe::updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID)
{
	//switch requires chars (or ints) -> strings will NOT work 

	//1st row:
	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID; 
		ticTacToeGrid[0][0] = playerID;
	}

	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID; 
		ticTacToeGrid[0][1] = playerID;
	}

	else if (theMove == "c")
	{
		ticTacToeGrid[0][2] = playerID;
	}

	//2nd row: 
	else if (theMove == "d")
	{
		ticTacToeGrid[1][0] = playerID;
	}

	//etc. all the way to i
	else if (theMove == "e")
	{
		ticTacToeGrid[1][1] = playerID;
	}

	else if (theMove == "f")
	{
		ticTacToeGrid[1][2] = playerID;
	}

	//3rd row:
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
		std::cout << "That isn't a valid move - you lose your turn! (too harsh?)" << std::endl;
	}
}

void TicTacToe::printTheGrid(twoDGrid& ticTacGrid)
void TicTacToe::printTheGrid(twoDGrid& ticTacToeGrid)
{
	//n****** loop
	for (int row = 0; row < ticTacGrid.size(); ++row)
	for (int row = 0; row < ticTacToeGrid.size(); ++row)
	{
		for (int col = 0; col < ticTacGrid[0].size(); ++col)
		for (int col = 0; col < ticTacToeGrid[0].size(); ++col)
		{
			std::cout << ticTacGrid[row][col] << " "; 
			std::cout << "|" << ticTacToeGrid[row][col];
		}
		std::cout << std::endl; 
		std::cout << std::endl;
		//std::cout << "______";
	}
}

bool TicTacToe::checkForHorizontalWin(const twoDGrid& ticTacToeGrid)
{
	for (int row = 0; row < 3; ++row) //what should variable name be???
	{
		if (ticTacToeGrid[row][0] == ticTacToeGrid[row][1]
			&&
			ticTacToeGrid[row][1] == ticTacToeGrid[row][2])
		{
			std::cout << "Player " << ticTacToeGrid[row][0] << " won!" << std::endl; 
			return true; 
		}
	}

	return false; //if we get to this line

	//win on 1st row: 
	
	//the "dumb" way is below
	//if (ticTacGrid[0][0] == ticTacGrid[0][1]
	//	&&
	//	ticTacGrid[0][1] == ticTacGrid[0][2])
	//{
	//	return true; 
	//}

	////win on second row: 

	//else if (ticTacGrid[1][0] == ticTacGrid[1][1]
	//	&&
	//	ticTacGrid[1][1] == ticTacGrid[1][2])
	//{
	//	return true;
	//}

	////now check for row 3 ....
}

bool TicTacToe::checkForVerticalWin(const twoDGrid& ticTacToeGrid)
{
	return false;
}

bool TicTacToe::checkForDiagonalWin(const twoDGrid& ticTacToeGrid)
{
	return false;
}

bool TicTacToe::checkForWin(const twoDGrid& ticTacToeGrid)
{
	//ticTacGrid[0][0] = "X"; //no bueno!

	if (checkForHorizontalWin(ticTacToeGrid) == true)
	{
		return true;
	}

	else if (checkForVerticalWin(ticTacToeGrid) == true)
	{
		return true; 
	}

	else if (checkForDiagonalWin(ticTacToeGrid) == true)
	{
		return true; 
	}

	else
	{
		//what goes here? 
		return false; 
	}

	//return false; //"unreachable code"
}

//void TicTacToe::updateGrid(twoDGrid ticTacGrid, std::string theMove)
//{
//}

//void TicTacToe::updateGrid(twoDGrid ticTacGrid, std::string playerMove)
//{
//
//}
