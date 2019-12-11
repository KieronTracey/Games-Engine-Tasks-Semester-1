#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

void DrawBoard();

string Board[2][10] = { {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"},
						{"A", "A", "C", "B", "E", "D", "D", "C", "B", "E"}
};

void DrawBoard(int score)
{
	system("cls");

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << Board[0][i] << "]";
	}

	cout << "Score: " << score << '\n';
}

void UpdateBoard(int Choice, int Score)
{
	string Temp;

	Temp = Board[0][Choice - 1];

	Board[0][Choice - 1] = Board[1][Choice - 1];

	Board[1][Choice - 1] = Temp;

	DrawBoard(Score);
}

int main()
{
	int Choice1;
	int Choice2;
	int Score = 0;

	while (Score != 5)
	{
		DrawBoard(Score);

		cout << "Please enter the number of the card you wish to flip: ";

		cin >> Choice1;

		UpdateBoard(Choice1, Score);

		cout << "Please chose another card to flip and compare: ";

		cin >> Choice2;

		UpdateBoard(Choice2, Score);


		if (Board[0][Choice1 - 1] == Board[0][Choice2 - 1])
		{
			Score++;


			DrawBoard(Score);
			cout << '\n' << "The two cards you flipped match!\n";

			cin.clear();

			cin.ignore();

			cin.get();
		}
		else
		{
			UpdateBoard(Choice1, Score);

			UpdateBoard(Choice2, Score);

			cout << '\n' << "The two cards you flipped did not match.\n";

			cin.clear();

			cin.ignore();

			cin.get();
		}

		if (Score == 5)
		{
			cout << "You have matched every card!";

			break;
		}
	}

	cin.get();

	return 0;
}