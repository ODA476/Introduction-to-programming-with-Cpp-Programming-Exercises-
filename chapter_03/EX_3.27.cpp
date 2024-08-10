#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int totalSeconds = time(0);
	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24;
	int timeZoneOffset;

	cout << "Enter the time zone offset to GMT: ";
	cin >> timeZoneOffset;

	int currentHourWithTimeZone = currentHour + timeZoneOffset;

	if (currentHourWithTimeZone > 12)
		cout << "The current time is "
		<< currentHourWithTimeZone - 12
		<< ":" << currentMinute << ":"
		<< currentSecond << " PM" << endl;

	else if (currentHourWithTimeZone == 0)
		cout << "The current time is "
		<< 12 << ":" << currentMinute << ":"
		<< currentSecond << " AM" << endl;

	else
		cout << "The current time is "
		<< currentHourWithTimeZone
		<< ":" << currentMinute << ":"
		<< currentSecond << " AM" << endl;

	return 0;
}