#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float x, y;

	//inital value
	x = 2.5;
	y = 1.2;

	cout << "x\ty\tpow(x, y)" << endl;
	cout << x << "\t" << y << "\t" << pow(x, y) << endl;

	x = 5.0;
	y = 2.4;
	cout << x << "\t" << y << "\t" << pow(x, y) << endl;

	x = 1.2;
	y = 3.6;
	cout << x << "\t" << y << "\t" << pow(x, y) << endl;

	x = 2.4;
	y = 5.0;
	cout << x << "\t" << y << "\t" << pow(x, y) << endl;

	x = 3.6;
	y = 2.5;
	cout << x << "\t" << y << "\t" << pow(x, y) << endl;

	return 0;
}