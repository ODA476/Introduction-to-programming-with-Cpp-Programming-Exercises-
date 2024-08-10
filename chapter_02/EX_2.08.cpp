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

	cout << "The current time is " << currentHour + timeZoneOffset
		<< ":" << currentMinute << ":"
		<< currentSecond << endl;

	return 0;
}