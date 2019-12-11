#include <iostream>
using namespace std;

float main()
{

	float MySavings = 2000.0f;
	float YourPercentage = 50.0f;

	float YourShare = (MySavings * (YourPercentage / 100.0f));

	cout << "your share: " << YourShare << endl;
	
	cin.get();

	return 0;


}