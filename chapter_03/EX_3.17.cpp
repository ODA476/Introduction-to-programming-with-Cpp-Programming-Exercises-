#include<iostream>

using namespace std;

int main()
{
	int num, digit1, digit2, digit3, sum;

	cout << "Enter your number between 0 - 1000: ";
	cin >> num;

	if (num < 100)
	{
		digit1 = num / 100;
		digit2 = num / 10 % 10;
		digit3 = num % 10;


		sum = digit1 + digit2 + digit3;

		cout << "The sum of " << num << " digits = " << sum << endl;
	}
	else
	{
		cout << "Your number is invalid!" << endl;
	}

	return 0;
}
