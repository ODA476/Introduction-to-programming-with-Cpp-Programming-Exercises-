#include<iostream>
#include<ctime> // to import time()
#include<cstdlib> // to import srand(), and rand()

using namespace std;

int main()
{
	// generate a predicate number
	srand(time(0));
	int predictedNumber = rand() % 100;

	// Enter a user number
	int num;
	cout << "Enter your number: ";
	cin >> num;

	// matching the digits.
	if (num == predictedNumber)
	{
		cout << "The accuracy is 100%." << endl;
	}
	else
	{
		if ((predictedNumber / 10) == (num / 10)
			|| (predictedNumber % 10) == (num % 10)
			|| (predictedNumber / 10) == (num % 10)
			|| (predictedNumber % 10) == (num / 10))
		{
			cout << "The accuracy is 50%." << endl;
		}
		else
		{
			cout << "The accuracy is 0%." << endl;
		}
	}
	return 0;
}