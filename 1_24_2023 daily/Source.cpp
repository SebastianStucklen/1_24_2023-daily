#include<iostream>
using namespace std;

int main() {

	char choice;
	cout << "do you like platformers? (y/n)" << endl;
	cin >> choice;
	
	if (choice == 'y') {
		int difficulty;
		cout << "On a scale from 1-10, how difficult of a game would you like to play?" << endl;
		cin >> difficulty;
		if (difficulty >= 5)
			cout << "I recommend Mario Bros.";
		else if (difficulty < 5)
			cout << "I recommend Kirby's Epic Yarn";



	}
	else if (choice == 'n') {
		int difficulty;
		cout << "On a scale from 1-10, how difficult of a game would you like to play?" << endl;
		cin >> difficulty;
		if (difficulty >= 5)
			cout << "I recommend Dark Souls";
		else if (difficulty < 5)
			cout << "I recommend Minecraft";

	}
	else
		cout << "Sorry. I don't understand your answer";
}