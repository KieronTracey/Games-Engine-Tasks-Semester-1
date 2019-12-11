#include <iostream>
#include <string>
using namespace std;

int main()
{
	string userInput = " ";
	string testString = "Do you know who loves C++ XX does!";
	int position = 1;
	string newname = " ";
	int counting = 27;
	int replacer = 0;

	cout << endl << "please enter your name." << endl << endl;
	getline(cin, userInput);


	testString.insert(27, userInput, 0, userInput.length() +1);

	cout << testString << endl << endl;

	position = testString.find_first_of('X');
	testString.replace(position,1," ");
	position = testString.find_last_of('X');
	testString.replace(position,1," ");

	cout << testString << endl << endl;

	cout << "please enter a new name that is longer than the first one" << endl << endl;
	getline(cin, newname);

	position = testString.find_last_of('d');
		position - 1;

		while (counting != position)
		{
			replacer++;
			counting++;
		}

		testString.replace(26, replacer, newname);

		cout << testString << endl << endl;

}



