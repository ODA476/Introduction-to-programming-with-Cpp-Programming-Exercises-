#include<iostream>

using namespace std;

int main()
{
	int edge1, edge2, edge3;

	cout << "Enter the edges of a triangle: ";
	cin >> edge1 >> edge2 >> edge3;

	if (edge1 == edge2 && edge1 == edge3)
	{
		cout << "Equilateral Triangle." << endl;
	}
	else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3)
	{
		cout << "Isosceles Triangle." << endl;
	}
	else
	{
		cout << "Scalene Triangle.";
	}

	return 0;
}