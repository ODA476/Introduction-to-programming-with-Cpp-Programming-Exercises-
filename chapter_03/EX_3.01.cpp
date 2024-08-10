#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double  a, b, c, discriminant, r1, r2;

	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;

	discriminant = pow(b, 2) - (4 * a * c);

	if (discriminant > 0)
	{
		r1 = (-b + pow(discriminant, 0.5)) / (2 * a);
		r2 = (-b - pow(discriminant, 0.5)) / (2 * a);

		cout << "The root are " << r1 << " and " << r2 << endl;

	}
	else if (discriminant < 0)
	{
		cout << "The equation has no real roots." << endl;

	}
	else
	{
		r1 = (-b + pow(discriminant, 0.5)) / (2 * a);

		cout << "The root is " << r1 << endl;

	}

	return 0;
}