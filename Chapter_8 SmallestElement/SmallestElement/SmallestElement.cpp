#include <iostream>

using namespace std;

int main()
{
	int userInputs[10];

	for ( int i = 0; i < 10; i++)
	{
		cout << "please enter an integer" << endl;
		cin >> userInputs[i];

	}

	int temp = userInputs[0];

	for (int i = 1; i < 10; i++)
	{
		if (temp > userInputs[i])
			temp = userInputs[i];

	}

	int a = 0;

	for (int i = 0; i < 10; i++)
	{
		if (temp == userInputs[i])
			break;

		else
		{
			a++;
		}
	}


	cout << "the smallest number is: " << temp << ", located at array element: " << a;
}
