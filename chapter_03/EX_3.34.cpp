#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{

	// Generate t
	srand(time(0));

	// Generate random number between -150, 150 for first point
	float x_1 = (rand() % 299) - 149;
	float y_1 = (rand() % 299) - 149;

	// Generate random number between -150, 150 for second point
	float x_2 = (rand() % 299) - 149;
	float y_2 = (rand() % 299) - 149;

	// display the result
	cout << "The first Point: " << "(" << x_1 << ", " << y_1 << ")" << endl;
	cout << "The second Point: " << "(" << x_2 << ", " << y_2 << ")" << endl;

	return 0;
}
