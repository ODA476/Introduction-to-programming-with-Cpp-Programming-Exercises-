#include<iostream>

using namespace std;

int main()
{
	// Enter a integer 
	int num;
	cout << "Enter a three-digit integer: ";
	cin >> num;

	// This is an additional step to ensure the program runs correctly
	if (!(num >= 100 && num <= 999))
	{
		cout << "Your input is not right!" << endl;
		return 0;
	}


	// A three-digit integer be a palindrome if d1 = d3
	// so, I will determine the d1 and d3
	// note: there is no any benefit to compute d2.
	int d1, d3;
	d1 = num / 100;
	d3 = num % 10;

	// check
	if (d1 == d3)
		cout << num << " is a palindrome" << endl;

	else
		cout << num << " is not a palindrome" << endl;

	return 0;
}
