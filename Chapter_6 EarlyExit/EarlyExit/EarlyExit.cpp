#include <iostream>

using namespace std;

int main()
{
	int PlayerLife = 100;
	int i;
	int input;
	bool asked = true;

    for (i = 0; i < 10; i++)
	{
		if (PlayerLife < 0)
		{
			break;
		}

		cout << " the player's life is at "; cout << PlayerLife;
		cout << endl;

		cout << "Question " << i << ":How much should we decrease the health by?";
		cin >> input;
		PlayerLife = (PlayerLife - input);
		
		cout << endl;
	}

	if (PlayerLife < 0)
	{
		cout << "Early Exit"; 
		cout << endl;
	}
	else
	{
		cout << "All 10 questions asked and player still has life remaining";
		cout << endl;
	}
}
