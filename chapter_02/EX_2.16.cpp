#include<iostream>

using namespace std;

int main()
{
	double side, area;

	cout << "Enter the side: ";
	cin >> side;

	area = (3 * pow(3, 0.5) * pow(side, 2)) / 2;

	cout << "The area of the hexagon is " << area << endl;

	return 0;
}