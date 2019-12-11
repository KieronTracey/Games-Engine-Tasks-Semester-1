#include <iostream>

using namespace std;

int main()
{
	int integers[5];
	int a = 4;
	int biggestarray = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << "please enter and integer" << endl;
		cin >> integers[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << integers[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << integers[a] << endl;
		a--;
	}

	int biggestnum = integers[0];

	for (int i = 0; i < 5; i++)
	{
		if (biggestnum < integers[i])
			biggestnum = integers[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (biggestnum == integers[i])
			break;
		else
		{
			biggestarray++;
		}
	}

	cout << "The biggest number in the array is: " << biggestnum << ". It is in position: " << biggestarray << endl;

}