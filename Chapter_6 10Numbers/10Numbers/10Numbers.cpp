#include <iostream>

using namespace std;

int main()
{
	int FirstNumber;
	int SecondNumber;
	int OtherNumber;
	int Sum;
	int Mean;
	int NumOfValues = 3;


	cout << "Please enter a number";
	cin >> FirstNumber;

	cout << "Please enter a second number";
	cin >> SecondNumber;

	Sum = (FirstNumber + SecondNumber);
	Mean = (Sum / 2);

	do

	{
		cout << "The Sum of your values is: " << Sum << ", and the Mean of your values is: " << Mean << ". Please enter another value";
		cin >> OtherNumber;

		Sum = (Sum + OtherNumber);
		Mean = (Sum / NumOfValues++);
	
	} while (OtherNumber > 0);

	cout << "Oops! You entered the value 0!";


}