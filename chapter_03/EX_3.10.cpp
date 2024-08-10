#include<iostream>
#include<ctime> // for time() function
#include<cstdlib> // for srand() and rand() function  

using namespace std;

int main()
{
	// srand => sets an new seed for random number
	srand(time(0));
	// rand % 50 => any integer less than 50 (0 - 49)
	int num1 = rand() % 50;
	int num2 = rand() % 50;

	cout << "What is " << num1 << " X " << num2 << "? ";

	int answer;
	cin >> answer;

	if ((num1 * num2) == answer)
	{
		cout << "You are correct!" << endl;
	}
	else
	{
		cout << "Your answer is wrong. " << num1 << " X " << num2
			<< " should be " << num1 X num2 << endl;
	}

	return 0;

}