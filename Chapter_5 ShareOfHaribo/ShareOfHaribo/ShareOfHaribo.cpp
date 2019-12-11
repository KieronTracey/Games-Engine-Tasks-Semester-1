#include <iostream>

using namespace std;

int main()
{
	int Haribo;
	int Students;
	int Leftover;
	int HariboPerPerson;

	cout << "How many packets of Haribo do you have?";
		cin >> Haribo;

		cout << "Ok, so we have " << Haribo << " packets of Haribo, how many students are there? ";
			cin >> Students;

			HariboPerPerson = Haribo / Students;
			Leftover = Haribo % Students;

			cout << "Ok, when divided equally each student should get " << HariboPerPerson
				 << " packets of Haribo, with the " << Leftover << " packets going back to the teacher.";

			cin.get();
			
			return 0;
}