#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	// generate a random number (0 - 1 - 2)
	srand(time(0));
	int computerChoice = rand() % 3;

	// classify the random number
	string computerChoiceName;
	if (computerChoice == 0)
	{
		computerChoiceName = "scissor";
	}
	else if (computerChoice == 1)
	{
		computerChoiceName = "rock";
	}
	else
	{
		computerChoiceName = "paper";
	}

	// Enter a user number
	int userChoice;
	cout << "scissor (0), rock (1), paper (2): ";
	cin >> userChoice;

	// classify the user number
	string userChoiceName;
	if (userChoice == 0)
	{
		userChoiceName = "scissor";
	}
	else if (userChoice == 1)
	{
		userChoiceName = "rock";
	}
	else
	{
		userChoiceName = "paper";
	}

	// the Game (A scissor can cut a paper, a rock can knock a scissor, and a paper can wrap a rock.) 
	// First, check if user choice > 3. If user choice > 3 exit.
	if (userChoice > 2)
	{
		cout << "Your choice does not exists!!!" << endl;
		return 0;
	}
	// continue
	else
	{
		// Draw
		if (computerChoice == userChoice)
		{
			cout << "The computer is " << computerChoiceName << ". "
				<< "You are " << userChoiceName << " too. It is a draw."
				<< endl;
		}
		// Win
		else if (computerChoice == 0 && userChoice == 1
			|| computerChoice == 1 && userChoice == 2
			|| computerChoice == 2 && userChoice == 0)
		{
			cout << "The computer is " << computerChoiceName << ". "
				<< "You are " << userChoiceName << " You won."
				<< endl;
		}
		// Lose
		else
		{
			cout << "The computer is " << computerChoiceName << ". "
				<< "You are " << userChoiceName << " You lost."
				<< endl;
		}
	}

	return 0;
}

// (if classify repeated) has a solution at functions chapter.
