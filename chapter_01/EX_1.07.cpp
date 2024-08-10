#include<iostream>

using namespace std;

int main()
{
	// using 1.0 rather than 1, because when we will divide, we will have a float number as result 
	cout << sqrt(6 * (1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25))) << endl;
	cout << sqrt(6 * (1.0 + (1.0 / 4) + (1.0 / 9) + (1.0 / 16) + (1.0 / 25) + (1.0 / 36))) << endl;

	return 0;
}


