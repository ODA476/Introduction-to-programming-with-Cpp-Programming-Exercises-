#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x, y;

	cout << "Enter a point with two coordinates: ";
	cin >> x >> y;

	// check if the point in a circle or not.
	// First, compute the distance that from (0, 0) the center 
	// to Entered point.
	double distance = pow(pow(x, 2) + pow(y, 2), 0.5);

	// Second, a point is in the circle if its distance to (0, 0) is less than or equal to 10
	if (distance <= 10)
		cout << "point (" << x << "," << y << ") " << "is in the circle"
		<< endl;
	else
		cout << "point (" << x << "," << y << ") " << "is not in the circle"
		<< endl;

	return 0;
}
