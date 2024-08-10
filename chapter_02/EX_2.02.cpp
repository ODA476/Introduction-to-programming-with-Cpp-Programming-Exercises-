#include<iostream>

using namespace std;

int main()
{
	double radius, length, area, volume;
	cout << "Enter the radius amd length of a cylinder: ";
	cin >> radius >> length;

	area = radius * radius * 3.1415926535;
	volume = area * length;

	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl;

	return 0;
}


