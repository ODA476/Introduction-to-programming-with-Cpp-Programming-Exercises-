#include<iostream>

using namespace std;

int main()
{
	int num1, num2, num3, max;

	cout << "Enter the three number: ";
	cin >> num1 >> num2 >> num3;

	max = num1;

	// select the maximum number
	if (num2 > max)
	{
		max = num2;
	}

	if (num3 > max)
	{
		max = num3;
	}

	// select other order number
	if (max == num1)
	{
		if (num2 > num3)
		{
			cout << num3 << " " << num2 << " " << max << endl;
		}
		else
		{
			cout << num2 << " " << num3 << " " << max << endl;
		}
	}
	else if (max == num2)
	{
		if (num3 > num1)
		{
			cout << num1 << " " << num3 << " " << max << endl;
		}
		else
		{
			cout << num3 << " " << num1 << " " << max << endl;
		}
	}
	else
	{
		if (num2 > num1)
		{
			cout << num1 << " " << num2 << " " << max << endl;
		}
		else
		{
			cout << num2 << " " << num1 << " " << max << endl;
		}
	}

	return 0;
}