#include<iostream>

using namespace std;

int main()
{
	// Zeller's congruence
	// h = (q + ((26 * (m + 1)) / 10) + k + (k / 4) + (j / 4) + (5 * j)) % 7
	// h => is a day of the week
	// q => is a day of the month
	// m => is the month 
	// j => is the century
	// k => is the year of the century

	// Enter year
	int year;
	cout << "Enter year: (e.g., 2012): ";
	cin >> year;

	// Enter month
	int m;
	cout << "Enter month: 1-12: ";
	cin >> m;

	// Enter the day of the month
	int q;
	cout << "Enter the day of the month: 1-31: ";
	cin >> q;

	// January and February are counted as 13 & 14 in the formula
	// now, covert m if equal 1 to 13, and if 2 to 14
	// then subtract 1 from year => year -= 1
	if (m == 1)
	{
		m = 13;
		year -= 1;
	}
	else if (m == 2)
	{
		m = 14;
		year -= 1;
	}

	// compute j (the century)
	int j = year / 100;

	// compute k (the year of the century)
	int k = year % 100;

	// compute the Zeller's
	int h = (q + ((26 * (m + 1)) / 10) + k + (k / 4) + (j / 4) + (5 * j)) % 7;

	// classify the h
	string name_of_day;
	switch (h)
	{
	case 0: name_of_day = "Saturday"; break;
	case 1: name_of_day = "Sunday"; break;
	case 2: name_of_day = "Monday"; break;
	case 3: name_of_day = "Tuesday"; break;
	case 4: name_of_day = "Wednesday"; break;
	case 5: name_of_day = "Thursday"; break;
	case 6: name_of_day = "Friday"; break;
	}

	// display the result
	cout << "Day of the week is " << name_of_day << endl;

	return 0;
}
