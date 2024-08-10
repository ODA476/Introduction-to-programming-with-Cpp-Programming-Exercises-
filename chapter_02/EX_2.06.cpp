#include<iostream>

using namespace std;

int main()
{
	int number, digit_0, digit_1, digit_2, sum;

	cout << "Enter a number between 0 and 1000: ";
	cin >> number;

	digit_0 = number % 10;
	digit_1 = (number / 10) % 10;
	digit_2 = (number / 100) % 10;

	sum = digit_0 + digit_1 + digit_2;

	cout << "The sum of the digits is " << sum << endl;

	return 0;
}


