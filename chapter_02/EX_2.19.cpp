#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3, side1, side2, side3, s, area;

	cout << "Enter three points for a triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	// the length for any side equals the distance between two points
	side1 = pow(pow(x3 - x1, 2) + pow(y3 - y1, 2), 0.5);
	side2 = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);
	side3 = pow(pow(x3 - x2, 2) + pow(y3 - y2, 2), 0.5);

	s = (side1 + side2 + side3) / 2;

	area = pow(s * (s - side1) * (s - side2) * (s - side3), 0.5);

	cout << "The area of the triangle is " << area << endl;

	return 0;
}