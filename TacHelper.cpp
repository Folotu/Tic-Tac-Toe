#include <iostream>
#include "TicHeader.h"

using namespace std;

//initiallized string arr with 9 elem to create the 3x3 matrix board
string board[9] = { " ", " ", " ", " ", " ", " "," ", " ", " " }; 

int player = 1;
int position = 0;	//position on the board

void intro()
{
	cout << "Press [Enter] to start: ";
	getchar(); //pauses the screen to get char from user
	cout << "\n";

	cout << "\n";
	cout << "***********\n";
	cout << "Tic-Tac-Toe\n";
	cout << "***********\n";

	cout << "Player 1) X\n";
	cout << "Player 2) O\n";

	cout << "The 3x3 grid is shown below:\n\n";

	cout << "      |      |       \n";
	cout << "  1   |   2  |   3   \n";
	cout << "______|______|______ \n";
	cout << "      |      |       \n";
	cout << "  4   |   5  |   6   \n";
	cout << "______|______|______ \n";
	cout << "      |      |       \n";
	cout << "  7   |   8  |   9   \n";
	cout << "      |      |       \n\n";

}