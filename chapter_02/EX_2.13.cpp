#include<iostream>

using namespace std;

int main()
{
	double amount, amountAfterFirstMonth,
		amountAfterSecondMonth, amountAfterThirdMonth,
		amountAfterFourthMonth, amountAfterFifthMonth,
		amountAfterSixthMonth;

	cout << "Enter the monthly saving amount: ";
	cin >> amount;

	// the monthly interest rate in question is 0.00417
	amountAfterFirstMonth = amount * (1 + 0.00417);
	amountAfterSecondMonth = (amount + amountAfterFirstMonth)
		* (1 + 0.00417);
	amountAfterThirdMonth = (amount + amountAfterSecondMonth)
		* (1 + 0.00417);
	amountAfterFourthMonth = (amount + amountAfterThirdMonth)
		* (1 + 0.00417);
	amountAfterFifthMonth = (amount + amountAfterFourthMonth)
		* (1 + 0.00417);
	amountAfterSixthMonth = (amount + amountAfterFifthMonth)
		* (1 + 0.00417);

	cout << "After the sixth month, the account value is $"
		<< amountAfterSixthMonth << endl;

	return 0;
}