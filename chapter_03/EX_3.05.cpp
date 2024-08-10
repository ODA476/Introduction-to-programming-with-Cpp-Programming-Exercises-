#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int today, numberOfDayAfterToday, numberOfFutureDay;
	string nameOfFutureDay, nameOfToday;

	cout << "Enter today's day: ";
	cin >> today;

	cout << "Enter the number of days elapsed since today: ";
	cin >> numberOfDayAfterToday;

	numberOfFutureDay = (today + numberOfDayAfterToday) % 7;

	// repeating the if statmant has a solution in function chapter.

	if (today == 0)
	{
		nameOfToday = "Sunday";
	}
	else if (today == 1)
	{
		nameOfToday = "Monday";
	}
	else if (today == 2)
	{
		nameOfToday = "Tuesday";
	}
	else if (today == 3)
	{
		nameOfToday = "Wednesday";
	}
	else if (today == 4)
	{
		nameOfToday = "Thursday";
	}
	else if (today == 5)
	{
		nameOfToday = "Friday";
	}
	else //number of future day = 6
	{
		nameOfToday = "Saturday";
	}



	if (numberOfFutureDay == 0)
	{
		nameOfFutureDay = "Sunday";
	}
	else if (numberOfFutureDay == 1)
	{
		nameOfFutureDay = "Monday";
	}
	else if (numberOfFutureDay == 2)
	{
		nameOfFutureDay = "Tuesday";
	}
	else if (numberOfFutureDay == 3)
	{
		nameOfFutureDay = "Wednesday";
	}
	else if (numberOfFutureDay == 4)
	{
		nameOfFutureDay = "Thursday";
	}
	else if (numberOfFutureDay == 5)
	{
		nameOfFutureDay = "Friday";
	}
	else // number of future day = 6
	{
		nameOfFutureDay = "Saturday";
	}

	cout << "Today is " << nameOfToday << " and the future day is "
		<< nameOfFutureDay << endl;

	return 0;
}