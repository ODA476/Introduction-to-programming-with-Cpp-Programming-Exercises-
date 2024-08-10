#include<iostream>

using namespace std;

int main()
{
	int minutes, days, years, minutesPerDay, minutesPerYear;

	cout << "Enter the number of minutes: ";
	cin >> minutes;

	// 1 day = 60 * 24 = 1440 minutes
	minutesPerDay = 60 * 24;

	// 1 year = 1440 * 365 = 525600 minutes.
	minutesPerYear = 1440 * 365;


	years = minutes / minutesPerYear;
	days = minutes % minutesPerYear / minutesPerDay;

	cout << minutes << " minutes is approximately "
		<< years << " years " << "and " << days
		<< " days" << endl;
	return 0;
}


