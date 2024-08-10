#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x1, y1, x2, y2, slope;

	cout << "Enter the coordinates for two points: ";
	cin >> x1 >> y1 >> x2 >> y2;

	slope = (y2 - y1) / (x2 - x1);

	cout << "The slope for thge line that connects two points "
		<< "(" << x1 << ", " << y1 << ") and "
		<< "(" << x2 << ", " << y2 << ") is " << slope << endl;

	return 0;
}