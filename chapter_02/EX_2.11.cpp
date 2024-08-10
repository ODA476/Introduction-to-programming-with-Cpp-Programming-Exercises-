#include<iostream>

using namespace std;

int main()
{
	int bornInYear, deathInYear, immigrateInYear, result,
		currentPopulation, secondsInYear, numberOfYear;
	secondsInYear = 3600 * 24 * 365;
	bornInYear = secondsInYear / 7;
	deathInYear = secondsInYear / 13;
	immigrateInYear = secondsInYear / 45;
	result = bornInYear - deathInYear + immigrateInYear;
	currentPopulation = 312032486;

	cout << "Enter the number of years: ";
	cin >> numberOfYear;

	cout << "The population in " << numberOfYear
		<< " year is "
		<< currentPopulation + (numberOfYear * result)
		<< endl;

	return 0;
}