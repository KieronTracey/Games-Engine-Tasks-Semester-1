#include <iostream>
using namespace std;

int OddOrEven(int num);
void outputResults(int numOfOdd, int numOfEven);

int main()
{
	int integer1, integer2, integer3, integer4, integer5, integer6, integer7, integer8, integer9, integer10;
	int evenCount = 0, oddCount = 0;
	bool evenorodd;

	cout << "Please enter a number" << endl;
	cin >> integer1;
	evenorodd = OddOrEven(integer1);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;
	
	cout << "Please enter a 2nd number" << endl;
	cin >> integer2;
	evenorodd = OddOrEven(integer2);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 3rd number" << endl;
	cin >> integer3;
	evenorodd = OddOrEven(integer3);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 4th number" << endl;
	cin >> integer4;
	evenorodd = OddOrEven(integer4);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 5th number" << endl;
	cin >> integer5;
	evenorodd = OddOrEven(integer5);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 6th number" << endl;
	cin >> integer6;
	evenorodd = OddOrEven(integer6);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 7th number" << endl;
	cin >> integer7;
	evenorodd = OddOrEven(integer7);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 8th number" << endl;
	cin >> integer8;
	evenorodd = OddOrEven(integer8);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 9th number" << endl;
	cin >> integer9;
	evenorodd = OddOrEven(integer9);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	cout << "Please enter a 10th number" << endl;
	cin >> integer10;
	evenorodd = OddOrEven(integer10);
	if (evenorodd == false)
		evenCount++;
	else
		oddCount++;

	outputResults(oddCount,evenCount);
}

int OddOrEven(int num)
{
	bool odd;

	if (num % 2 == 0)
		odd = false;

	else
		odd = true;

	return odd;
}

void outputResults(int numOfOdd, int numOfEven)
{
	cout << "there were " << numOfOdd << " Odd numbers and "<< numOfEven << " Even Numbers";
}