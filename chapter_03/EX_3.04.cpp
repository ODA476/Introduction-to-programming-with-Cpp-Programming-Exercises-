#include<iostream>

using namespace std;

int main()
{
	float speed;

	cout << "Enter the speed of a vehicle: ";
	cin >> speed;

	if (speed < 20)
	{
		cout << "too slow." << endl;
	}
	else if (speed < 80)
	{
		cout << "just right." << endl;
	}
	else
	{
		cout << "too fast." << endl;
	}

	return 0;
}