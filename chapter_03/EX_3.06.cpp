#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double weightInPounds, feet, inches, BMI;

	const double KILOGRAMS_PER_POUND = 0.45359237; // Constant
	const double METERS_PER_INCH = 0.0254; // Constant
	const double METERS_PER_FEET = 0.305; // Constant

	cout << "Enter weight in pounds: ";
	cin >> weightInPounds;

	cout << "Enter feet: ";
	cin >> feet;

	cout << "Enter inches: ";
	cin >> inches;

	// compute BMI 
	double weightInKilograms = weightInPounds * KILOGRAMS_PER_POUND;
	double heightInMeters = (inches * METERS_PER_INCH) + (feet * METERS_PER_FEET);
	double bmi = weightInKilograms / (heightInMeters * heightInMeters);


	// Display result 
	cout << "BMI is " << bmi << endl;

	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi < 25)
		cout << "Normal" << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;


	return 0;
}