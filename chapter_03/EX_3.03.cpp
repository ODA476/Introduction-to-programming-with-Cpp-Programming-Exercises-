#include<iostream>

using namespace std;

int main()
{
	float a, b, c, d, e, f;

	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	if (((a * d) - (b * c)) == 0)
	{
		cout << "The equation has no solution." << endl;
	}
	else
	{
		float x = ((e * d) - (b * f)) / ((a * d) - (b * c));
		float y = ((a * f) - (e * c)) / ((a * d) - (b * c));

		cout << "x is " << x << " and y is " << y << endl;
	}

	return 0;
}