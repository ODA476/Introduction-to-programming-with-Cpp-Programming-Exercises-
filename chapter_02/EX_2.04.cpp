#include<iostream>

using namespace std;

int main()
{
	double pound, kilogram;

	cout << "Enter a value for pounds: ";
	cin >> pound;

	kilogram = pound * 0.454;

	cout << pound << " pounds is " << kilogram << " kilogram" << endl;

	return 0;
}


