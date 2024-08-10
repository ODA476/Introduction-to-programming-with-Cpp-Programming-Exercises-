#include<iostream>

using namespace std;

int main()
{

	// 1 year in second = 3600 * 24 * 365 = 31536000
	// born in year = 31536000 / 7 ~= 4505142
	// death in year = 31536000 / 13 ~= 2425846
	// immigrate in year = 31536000 / 45 ~= 700800
	// the result of the previous = 6230188
	// current population = 312032486

	cout << "1 year population is: " << 312032486 + 6230188 << endl;
	cout << "2 year population is: " << 312032486 + 2 * 6230188 << endl;
	cout << "3 year population is: " << 312032486 + 3 * 6230188 << endl;
	cout << "4 year population is: " << 312032486 + 4 * 6230188 << endl;
	cout << "5 year population is: " << 312032486 + 5 * 6230188 << endl;

	return 0;
}