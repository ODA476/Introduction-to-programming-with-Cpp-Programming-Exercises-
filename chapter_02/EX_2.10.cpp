#include<iostream>

using namespace std;

int main()
{
	float M, intialTemp, finalTemp, Q;

	cout << "Enter the amount of water in kilograms: ";
	cin >> M;

	cout << "Enter the inital temperature: ";
	cin >> intialTemp;

	cout << "Enter the final temperature: ";
	cin >> finalTemp;

	Q = M * (finalTemp - intialTemp) * 4184;

	cout << "The energe needed is " << Q << endl;

	return 0;
}