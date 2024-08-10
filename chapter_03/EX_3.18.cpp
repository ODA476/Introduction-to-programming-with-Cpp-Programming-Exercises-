#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	// generate four numbers less than 5.
	srand(time(0));
	int num1 = rand() % 5;
	int num2 = rand() % 5;
	int num3 = rand() % 5;
	int num4 = rand() % 5;
	int num5 = rand() % 5;

	cout << num1 << " X " << num2 << " X " << num3 << " X " << num4
		<< " ? ";
	int result;
	cin >> result;

	if (num1 * num2 * num3 * num4 == result)
		cout << "You are correct!" << endl;
	else
		cout << "Your answer is wrong. " << num1 << " X " << num2
		<< " X " << num3 << " X " << num4 << " should be "
		<< (num1 * num2 * num3 * num4) << endl;

	return 0;
}
