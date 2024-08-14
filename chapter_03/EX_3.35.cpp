#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	// Enter the digits (9 digits) of an ISBN
	int ISBN_9;
	cout << "Enter the first 9 digits of an ISBN as integer: ";
	cin >> ISBN_9;

	// determine the digits
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;

	// d1
	d1 = ISBN_9 / int(pow(10, 8));
	ISBN_9 %= int(pow(10, 8));

	// d2
	d2 = ISBN_9 / int(pow(10, 7));
	ISBN_9 %= int(pow(10, 7));

	// d3
	d3 = ISBN_9 / int(pow(10, 6));
	ISBN_9 %= int(pow(10, 6));

	// d4
	d4 = ISBN_9 / int(pow(10, 5));
	ISBN_9 %= int(pow(10, 5));

	// d5
	d5 = ISBN_9 / int(pow(10, 4));
	ISBN_9 %= int(pow(10, 4));

	// d6
	d6 = ISBN_9 / int(pow(10, 3));
	ISBN_9 %= int(pow(10, 3));

	// d7
	d7 = ISBN_9 / int(pow(10, 2));
	ISBN_9 %= int(pow(10, 2));

	// d8
	d8 = ISBN_9 / int(pow(10, 1));
	ISBN_9 %= int(pow(10, 1));

	// d9
	d9 = ISBN_9 / int(pow(10, 0));

	// d10 => compute d10 from the equation that exists in question.
	d10 = (d1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11;

	// check if d10 == 10, display rather than it X.
	if (d10 == 10)
		cout << "The ISBN-10 number is " << d1 << d2 << d3
		<< d4 << d5 << d6 << d7 << d8
		<< d9 << "X" << endl;
	else
		cout << "The ISBN-10 number is " << d1 << d2 << d3
		<< d4 << d5 << d6 << d7 << d8
		<< d9 << d10 << endl;

	return 0;
}
