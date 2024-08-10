#include<iostream>

using namespace std;

int main()
{
	int numberOfDay, hour;

	cout << "Enter the number of day: ";
	cin >> numberOfDay;

	cout << "Enter hour: ";
	cin >> hour;

	if (hour < 25 && numberOfDay < 7)
	{

		// Monday = 1, Saturday = 7
		if (numberOfDay == 1)
		{
			cout << "Today is Sunday and Remaining " << 24 - hour << endl;
		}
		else if (numberOfDay == 2)
		{
			cout << "Today is Monday and Remaining " << 24 - hour << endl;
		}
		else if (numberOfDay == 3)
		{
			cout << "Today is Tuesday and Remaining " << 24 - hour << endl;
		}
		else if (numberOfDay == 4)
		{
			cout << "Today is Wednesday and Remaining " << 24 - hour << endl;
		}
		else if (numberOfDay == 5)
		{
			cout << "Today is Thursday and Remaining " << 24 - hour << endl;
		}
		else if (numberOfDay == 6)
		{
			cout << "Today is Friday and Remaining " << 24 - hour << endl;
		}
		else //number of future day = 7
		{
			cout << "Today is Saturday and Remaining " << 24 - hour << endl;
		}
	}
	else
	{
		cout << "Your input is wrong!" << endl;
	}

	return 0;
}