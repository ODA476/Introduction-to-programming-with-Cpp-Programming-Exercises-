#include<iostream>

using namespace std;

int main()
{
	double balance, interestRate, interest;

	cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
	cin >> balance >> interestRate;

	interest = balance * (interestRate / 1200);

	cout << "The interest is " << interest << endl;

	return 0;
}