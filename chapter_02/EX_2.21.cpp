#include<iostream>

using namespace std;

int main()
{
	float distance, milesPerGallon, pricePerGallon, cost;

	cout << "Enter the driving distance: ";
	cin >> distance;

	cout << "Enter miles per gallon: ";
	cin >> milesPerGallon;

	cout << "Enter price per gallon: ";
	cin >> pricePerGallon;

	cost = distance / (milesPerGallon / pricePerGallon);

	cout << "The cost of driving is $" << cost << endl;

	return 0;
}