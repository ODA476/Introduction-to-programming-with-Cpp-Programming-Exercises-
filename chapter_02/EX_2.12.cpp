#include<iostream>

using namespace std;

int main()
{
	double speed, acceleration, length;

	cout << "Enter spped and acceleration: ";
	cin >> speed >> acceleration;

	length = (speed * speed) / (2 * acceleration);

	cout << "The minimum runway length for this airplane is "
		<< length << endl;

	return 0;
}