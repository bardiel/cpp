#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

enum 			Status {WON = 0, LOST, CONTINUE};
unsigned int	rolls;

int rollDice() { 
	++rolls;
	return (1 + rand() % 6) + (1 + rand() % 6); 
}

int main()
{
	const size_t	sumPosibilities			= 11;
	const size_t	totalGames				= 36000;
	unsigned int	count[sumPosibilities]	= {};
	unsigned int	totalPlayed 			= 0;
	unsigned int	gameResults[2][21]		= {};
	unsigned int 	gameTotals[2]			= {};
	Status 			gameStatus;

	srand(time(0));

	for(size_t i = 0; i < totalGames; i++)
	{
		rolls = 0;

		unsigned int sum, point = rollDice();
		sum = point;
		
		++count[sum - 2];
		++totalPlayed;

		switch(sum)
		{
			case 7:
			case 11:
				gameStatus = WON;
				break;
			case 2:
			case 3:
			case 12:
				gameStatus = LOST;
				break;
			default:
				gameStatus = CONTINUE;
		}

		while(gameStatus == CONTINUE)
		{
			sum = rollDice();
			if(sum == point)  gameStatus	= WON;
			else if(sum == 7) gameStatus	= LOST;
		}

		if(rolls > 20) rolls = 21;
		++gameResults[gameStatus][rolls - 1];
		++gameTotals[gameStatus];
	}

	cout << setw(8) << "ROLLS" << setw(8) << "WON" << setw(8) << "LOST" << setw(8) << "PROB" << endl;
	for(size_t i = 0; i < 20; i++)
	{
		cout << setw(8) << i+1 << setw(8) << gameResults[0][i] << setw(8) << gameResults[1][i] << setw(8) << gameResults[0][i] * 100 / (gameResults[0][i] + gameResults[1][i]) << "%" << endl;
	}
	cout << setw(8) << "+20" << setw(8) << gameResults[0][20] << setw(8) << gameResults[1][20] << setw(8) << gameResults[0][20] * 100 / (gameResults[0][20] + gameResults[1][20]) << "%" << endl;
	cout << setw(8) << "TOTAL" << setw(8) << gameTotals[0] << setw(8) << gameTotals[1] << endl;

	cout << endl << fixed << setprecision(2);
	cout << "There're " <<  gameTotals[0] * 100.0 / totalGames << "\% chances of wining, and " 
		<< gameTotals[1] * 100.0 / totalGames << "\% chances of losing";

	cout << endl << endl;

	double otro = 0.0;

	cout << "DICE CHANCES: " << endl;
	cout << "SUM\t" << setw(8) << "COUNT" << endl << setprecision(2) << fixed;
	for(size_t i = 0; i < sumPosibilities; i++)
	{
		cout << i + 2 << "\t"	<< setw(6) << count[i] * 100.0 / totalGames << " " << "%" << endl;
		otro += count[i] * 100.0 / totalGames;
	}	

	cout << endl;

	return 0;
}