#include <iostream>
using namespace std;

int smallerNumber(int a, int b);

int main()
{
	int a, b;
	int smallestnum;

	cout << "please input an integer" << endl;
	cin >> a;

	cout << "please input a second interger" << endl;
	cin >> b;

	smallestnum = smallerNumber(a, b);
	

	cout << "the smallest entered number is: " << smallestnum;
}

int smallerNumber(int a, int b)
{
	int result;

	if (a < b)
		result = a;

	else
		result = b;
	
	return result;
	
}