#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userInput = " ";
	string replace = "X";
	int position = 1;

	cout << endl << "please enter a sentance." << endl << endl;
	getline(cin, userInput);

	cout << userInput << endl;


	while (position != -1)
	{
		position = userInput.find('e');

		if (position != -1)
			userInput.replace(position, 1, replace);
		else
			break;
	}
		
	cout << endl << userInput;
}
