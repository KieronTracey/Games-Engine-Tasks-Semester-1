#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char name[30] = { " " };
	char firstInitial = 'a';
	char secondInitial = 'b';

	cout << "Please enter the Initital of your first name, then a space, the inital of your middle name, then another space, then the entirety of your last name." <<endl;
	cin.getline(name, 30);

	cout << name[0] << endl;
	cout << name[2] << endl;
	for (int i = 4; i < 30; ++i)
		cout << name[i];

}

