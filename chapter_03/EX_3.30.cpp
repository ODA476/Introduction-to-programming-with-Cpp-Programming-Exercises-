#include<iostream>

using namespace std;

int main()
{
	// Enter weight and price for package 1
	cout << "Enter weight and price for package 1: ";
	float weight_1, price_1;
	cin >> weight_1 >> price_1;

	// Enter weight and price for package 2
	cout << "Enter weight and price for package 2: ";
	float weight_2, price_2;
	cin >> weight_2 >> price_2;


	// compute one unit of weight per its price
	float weight_per_price_1 = weight_1 / price_1;
	float weight_per_price_2 = weight_2 / price_2;

	// choose the better, the better has less cost than other
	if (weight_per_price_1 < weight_per_price_2)
		cout << "Package 1 has the better price." << endl;

	else if (weight_per_price_1 > weight_per_price_2)
		cout << "Package 2 has the better price." << endl;

	else
		cout << "Two packages have the same price." << endl;

	return 0;
}