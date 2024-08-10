#include<iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "Enter a point with two coordinates: ";
	cin >> x >> y;

	// check if the point in a rectangle or not.
	// A point is in the rectangle
	// if its horizontal distance to(0, 0) is less than or equal to 10 / 2 and its vertical
	// distance to(0, 0) is less than or equal to 5 / 2.

	double horizontalDistance = x;
	double verticalDistance = y;

	if (horizontalDistance <= (10 / 2) && verticalDistance < (5.0 / 2))
		cout << "point (" << x << "," << y << ") " << "is in the rectangle"
		<< endl;
	else
		cout << "point (" << x << "," << y << ") " << "is not in the rectangle"
		<< endl;

	return 0;
}
