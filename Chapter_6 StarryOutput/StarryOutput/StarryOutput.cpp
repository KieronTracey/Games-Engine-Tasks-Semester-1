#include <iostream>

using namespace std;



int main()
{
	int UserNumber;
	bool PlayAgain = true;
	char yesno;

	do {

		cout << "please input a number between 1 and 10";
		cin >> UserNumber;

		if (UserNumber < 1)
		{
			cout << "Sorry, that isn't a number between 1 and 10.";
		}

		else if (UserNumber > 10)
		{
			cout << "Sorry, that isn't a number between 1 and 10.";
		}

		else if (UserNumber == 1)
		{
			cout << "*";
		}

		else if (UserNumber == 2)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl;

		}

		else if (UserNumber == 3)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl;

		}

		else if (UserNumber == 4)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl;

		}

		else if (UserNumber == 5)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl; cout << "*****"; cout << endl;

		}

		else if (UserNumber == 6)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl; cout << "*****"; cout << endl;
			cout << "******"; cout << endl;
		}

		else if (UserNumber == 7)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl; cout << "*****"; cout << endl;
			cout << "******"; cout << endl; cout << "*******"; cout << endl;
		}

		else if (UserNumber == 8)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl; cout << "*****"; cout << endl;
			cout << "******"; cout << endl; cout << "*******"; cout << endl; cout << "********"; cout << endl;
		}

		else if (UserNumber == 9)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl; cout << "*****"; cout << endl;
			cout << "******"; cout << endl; cout << "*******"; cout << endl; cout << "********"; cout << endl; cout << "*********"; cout << endl;
		}

		else if (UserNumber == 10)
		{
			cout << "*"; cout << endl; cout << "**"; cout << endl; cout << "***"; cout << endl; cout << "****"; cout << endl; cout << "*****"; cout << endl;
			cout << "******"; cout << endl; cout << "*******"; cout << endl; cout << "********"; cout << endl; cout << "*********"; cout << endl; cout << "**********"; cout << endl;
		}
	
		cout << " Would you like to play again? please type 'Y' to play again or 'N' to quit";
		cin >> yesno;
			
		if (yesno == 'N' || yesno == 'n')
		{
			PlayAgain = false;
		}

	} while (PlayAgain == true);

	cout << "Goodbye";

	return 0;

}
