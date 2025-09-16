






#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include "MyLib.h";
#include "MyInputLib.h";
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>


using namespace std;

enum enGamechoise { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo
{
	short RoundNumber;
	enGamechoise Player1Choise;
	enGamechoise ComputerChoise;
	enWinner Winner;
	string WinnerName;
};

struct stGameResult
{
	short GameRound;
	short Player1winTimes;
	short ComputerWinTimes;
	short DrawTimes;
	enWinner GameWinner;
	string WinnerName = "";
};


int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

short HowManyRound()
{
	short GameRound = 1;
	do
	{
		cout << "How Many Round 1 to 10 \n";
		cin >> GameRound;
	} while (GameRound < 1 || GameRound > 10);

	return GameRound;
}

enGamechoise Player1Choise()
{
	short Choise = 1;
	do
	{
		cout << "Your Choise : [1]:Stone, [2]:Paper, [3]:Scissor\n";
		cin >> Choise;
	} while (Choise < 1 || Choise>3);

	return (enGamechoise)Choise;
}

enGamechoise GetComputerChoise()
{
	return (enGamechoise)RandomNumber(1, 3);
}

enWinner WhoWinTheRound(stRoundInfo RoundInfo)
{
	if (RoundInfo.Player1Choise == RoundInfo.ComputerChoise)
	{
		return enWinner::Draw;
	}

	switch (RoundInfo.Player1Choise)
	{
	case enGamechoise::Stone:
		if (RoundInfo.ComputerChoise == enGamechoise::Paper)
		{
			return enWinner::Computer;
		}
		break;

	case enGamechoise::Paper:
		if (RoundInfo.ComputerChoise == enGamechoise::Scissors)
		{
			return enWinner::Computer;
		}
		break;

	case enGamechoise::Scissors:
		if (RoundInfo.ComputerChoise == enGamechoise::Stone)
		{
			return enWinner::Computer;
		}
		break;

	}
	return enWinner::Player1;

}

string WinnerName(enWinner Winner)
{
	string arrWinnerName[3] = { "Player1","Computer","NoWinner" };
	return arrWinnerName[Winner - 1];
}

stGameResult PlayGame(short HowManyRound)
{
	stRoundInfo RoundInfo;

	short Player1winTimes = 0; short ComputerwinTimes = 0; short Drawtimes = 0;

	for (short GameRound = 1; GameRound <= HowManyRound; GameRound++)
	{
		cout << "Round " << GameRound << " begin\n";
		RoundInfo.RoundNumber = GameRound;
		RoundInfo.Player1Choise = Player1Choise();
		RoundInfo.ComputerChoise = GetComputerChoise();
		RoundInfo.Winner = WhoWinTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

		if (RoundInfo.Winner == enWinner::Player1)
			Player1winTimes++;

		if (RoundInfo.Winner == enWinner::Computer)
			ComputerwinTimes++;
		else
			Drawtimes++;

		PrintRoundResult(RoundInfo);
	}
	return FillGameResult(HowManyRound, Player1winTimes, ComputerwinTimes, Drawtimes);


}


void PrintRoundResult(stRoundInfo RoundInfo)
{
	cout << "\n------------Round [" << RoundInfo.RoundNumber << "] --------\n";
	cout << "Player1 Choise  :" << ChooseName(RoundInfo.Player1Choise) << endl;
	cout << "Computer choise :" << ChooseName(RoundInfo.ComputerChoise) << endl;
	cout << "Round Winner    :   [" << RoundInfo.WinnerName << "] ";
	cout << "-------------------------\n";

	SetWinnerScreenColor(RoundInfo.Winner);
}

string ChooseName(enGamechoise choose)
{
	string arrGameChoose[3] = { "Stone","paper","Secissor" };
	return arrGameChoose[choose - 1];
}

stGameResult FillGameResult(int GameRound, short Player1wintimes, short computerwintimes
	, short Drawtimes)
{
	stGameResult GameResult;

	GameResult.GameRound = GameRound;
	GameResult.Player1winTimes = Player1wintimes;
	GameResult.ComputerWinTimes = computerwintimes;
	GameResult.DrawTimes = Drawtimes;
	GameResult.GameWinner = WhowintheGame(Player1wintimes, computerwintimes);
	GameResult.WinnerName = WinnerName(GameResult.GameWinner);

	return GameResult;

}

enWinner WhowintheGame(short Player1winTimes, short computerwintimes)
{
	if (Player1winTimes > computerwintimes)
	{
		return enWinner::Player1;
	}
	else if (computerwintimes > Player1winTimes)
	{
		return enWinner::Computer;
	}
	else
		return enWinner::Draw;
}

string Taps(short NumberofTaps)
{
	string T = "";
	for (int i = 0; i < NumberofTaps; i++)
	{
		T = T + "\t";
		cout << T;
	}
	return T;
}

void ShowGameOverScreen()
{
	cout << Taps(2) << "-----------------------------------------\n\n";
	cout << Taps(2) << "                  Game Over +++  \n";
	cout << Taps(2) << "------------------------------------------\n\n";

}

void ShowFinalGameResult(stGameResult GameResult)
{
	cout << Taps(2) << " -------------------Game Result ---------------\n";
	cout << Taps(2) << "Game Round : " << GameResult.GameRound << endl;
	cout << Taps(2) << "Player1 Win Times : " << GameResult.Player1winTimes << endl;
	cout << Taps(2) << "Computer Win Times : " << GameResult.ComputerWinTimes << endl;
	cout << Taps(2) << "Draw Times : " << GameResult.DrawTimes << endl;
	cout << Taps(2) << "Final Winner : " << GameResult.WinnerName << endl;

	SetWinnerScreenColor(GameResult.GameWinner);
}

void SetWinnerScreenColor(enWinner Winner)
{
	switch (Winner)
	{
	case enWinner::Player1:
		system("color 2F");//Green
		break;

	case enWinner::Computer:
		system("color 4F");//Red
		break;

	default:
		system("color 6F");//Yellow
	}
}


void ResetScreen()
{
	system("cls");
	system("color 0F");
}


void StartGame()
{
	char PlayAgain = 'Y';

	do
	{
		ResetScreen();
		stGameResult GameResult = PlayGame(HowManyRound());
		ShowGameOverScreen();
		ShowFinalGameResult(GameResult);

		cout << endl << Taps(3) << "Do You Want To Play Again ? Y/N";
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}











int main()
{
	srand((unsigned)time(NULL));

	StartGame();

}



