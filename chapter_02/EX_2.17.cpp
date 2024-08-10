#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double temperature, windSpeed, windChill;

	cout << "Enter the temperature in Fahrenheit: ";
	cin >> temperature;

	cout << "Enter the wind speed in miles per hour: ";
	cin >> windSpeed;

	windChill = 35.74 + (0.6215 * temperature)
		- (35.75 * pow(windSpeed, 0.16))
		+ (0.4275 * temperature * pow(windSpeed, 0.16));

	cout << "The wind chill index is " << windChill << endl;

	return 0;
}