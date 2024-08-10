#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double investmentAmount, annualInterestRate, monthInterestRate, futureInvestment;
	int numberOfYear;

	cout << "Enter investment amount: ";
	cin >> investmentAmount;

	cout << "Enter annual interest rate in percentage: ";
	cin >> annualInterestRate;

	cout << "Enter number of year: ";
	cin >> numberOfYear;

	// one year has 12 month
	monthInterestRate = (annualInterestRate / 100) / 12;


	futureInvestment = investmentAmount * pow(1 + monthInterestRate, numberOfYear * 12);

	cout << "Accumulated value is $" << futureInvestment << endl;

	return 0;
}