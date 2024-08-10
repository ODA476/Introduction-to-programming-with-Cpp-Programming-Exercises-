#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;

	cout << "Enter x1, y1, x2, y2, x3, y3, x4, y4: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	/* NOTE: from EX_3.3 >>
		You can use Cramer�s rule to solve the
		following system of linear equation :
		ax + by = e
		cx + dy = f
		x = (ed - bf) / (ad - bc)
		y = (af - ec) / (ad - bc)
		(If ad � bc is 0, report that The equation has no solution.)

		a = y1 - y2
		b = x2 - x1
		e = (y1 - y2) * x1 - (x1 - x2) * y1

		c = y3 - y4
		d = x4 - x3
		f = (y3 - y4) * x3 - (x3 - x4) * y3
	*/

	double a, b, c, d, e, f, x, y;
	a = y1 - y2;
	b = x2 - x1;
	e = (y1 - y2) * x1 - (x1 - x2) * y1;
	c = y3 - y4;
	d = x4 - x3;
	f = (y3 - y4) * x3 - (x3 - x4) * y3;

	// according to the pervious (ad - bc) == 0, there is no solution.
	// that is meaning the two lines is parallel
	if (a * d == b * c)
	{
		cout << "The two lines are parallel" << endl;
	}
	else
	{
		x = (e * d - b * f) / (a * d - b * c);
		y = (a * f - e * c) / (a * d - b * c);
		cout << "The intersecting point is at (" << x << "," << y
			<< ")" << endl;
	}

	return 0;
}
