#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double edge1, edge2, edge3, height, area;

	// Enter all edges
	cout << "Enter edge1, edge2, edge3: ";
	cin >> edge1 >> edge2 >> edge3;

	// check if all edge are equivelent.
	if (edge1 != edge2)
	{
		cout << "The input is invalid." << endl;
		return 0;
	}
	else
	{
		// compute the height
		double height = pow((pow(edge1, 2) - pow((edge2 / 2), 2)), 0.5);

		// compute the area. Area = 0.5 * base * height
		// I will assume the base = edge2 / 2, because in equilateral 
		// triangle the height cut the base to two parts have the same length
		area = 0.5 * height * (edge2 / 2);

		cout << "The input is valid, and the area is " << area << endl;
	}
	return 0;
}
