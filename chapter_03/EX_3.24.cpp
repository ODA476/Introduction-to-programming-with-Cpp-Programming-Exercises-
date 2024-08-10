#include<iostream>

using namespace std;

int main()
{
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	bool is_num_divisible_by_5 = (num % 5) == 0;
	bool is_num_divisible_by_6 = (num % 6) == 0;

	// And
	cout << "Is " << num << " divisible by 5 and 6? "
		<< ((is_num_divisible_by_5 && is_num_divisible_by_6) ? "true" : "false")
		<< endl;

	// Or
	cout << "Is " << num << "  divisible by 5 or 6? "
		<< ((is_num_divisible_by_5 || is_num_divisible_by_6) ? "true" : "false")
		<< endl;

	// Xor
	cout << "Is " << num << "  divisible by 5 or 6, but not both? "
		<< (((is_num_divisible_by_5 && !is_num_divisible_by_6)
			|| (!is_num_divisible_by_5 && is_num_divisible_by_6)) ? "true" : "false")
		<< endl;

	return 0;
}
