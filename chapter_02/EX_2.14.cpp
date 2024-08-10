#include<iostream>

using namespace std;

int main()
{
	double weightInPound, heightInInch, weightInKilogram, heightInMeter, BMI;

	cout << "Enter weight in pounds: ";
	cin >> weightInPound;

	cout << "Enter height in inches: ";
	cin >> heightInInch;

	// one pound = 0.45359237 kilograms
	weightInKilogram = weightInPound * 0.45359237;

	// one inch = 0.0254 meters
	heightInMeter = heightInInch * 0.0254;

	BMI = weightInKilogram / (heightInMeter * heightInMeter);

	cout << "BMI is " << BMI;

	return 0;
}