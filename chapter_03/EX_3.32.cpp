#include<iostream>

using namespace std;

int main()
{
	// Enter the coordinates for two points
	float x1, y1, x2, y2;
	cout << "Enter the coordinates for two points: ";
	cin >> x1 >> y1 >> x2 >> y2;

	// compute the slop 
	float m = (y2 - y1) / (x2 - x1);

	// compute the constant (b)
	float b = y1 - (m * x1);

	// print the result
	cout << "The line equation for two points " << "(" << x1
		<< ", " << y1 << ")" << " and " << "(" << x2 << ", "
		<< x2 << ")" << " is y = ";


	// the question order don't display m if m = 1
	if (m != 1)
		cout << m << " x";
	else
		cout << "x";

	// and don't display b if b = 0;
	if (b != 0)
		cout << " + " << b << endl;
	else
		cout << endl;

	return 0;
}
