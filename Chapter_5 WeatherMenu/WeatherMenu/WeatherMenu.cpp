#include <iostream>

using namespace std;

int main()
{
	int playerinput;

	cout << "What type of weather do you prefer? Please type a number to pick from either:   1: Sunny,   2: Cloudy,   3: Rainy,   4: Snowy";

	cin >> playerinput;

	switch (playerinput)
	{
	case 1:
		cout << "Next time it's sunny, remember to bring some sunscreen!";

		break;

	case 2:
		cout << "Next time it's cloudy, make sure to check the weather forcast so you don't get caught in the rain!.";

		break;

	case 3: 
		cout << "Next time it's rainy, make sure to bring an umbrella so you don't get wet and catch a cold!";

		break;

	case 4:
		cout << "Next time it's snowy, make sure to dress in warm clothes so you don't get sick!";

		break;

	default:
		cout << "That isn't a valid input, please use input either 1, 2, 3, or 4.";

		break;

	}




}

