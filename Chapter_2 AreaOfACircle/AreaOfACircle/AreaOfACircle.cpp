#include <iostream>;

using namespace std;

int main()
{
	const float pi = 3.14f;

	float radius, areaOfCircle;

	radius = 22.0f;

	areaOfCircle = pi * radius * radius;

	cout << "The area of a circle with radius " << radius << " is " << areaOfCircle << endl;
}