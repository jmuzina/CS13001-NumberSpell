// Spells out a number between 1 and 50
// Project #2 Number Spell
// CS 13011
// Joseph Muzina
// 08/31/2018

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "Enter a number between 1 and 50: ";
	// User input
	int x;
	cin >> x;

	// stores the number in the ones' place
	const int singles = x % 10;

	// stores the number in the tens' place
	const int tens = x / 10;

	//If input is between 10 and 19, prints the number outright
	if (tens == 1) {
		switch (singles) {
		case 0:
			cout << "Ten \n";
			break;
		case 1:
			cout << "Eleven \n";
			break;
		case 2:
			cout << "Twelve \n";
			break;
		case 3:
			cout << "Thirteen \n";
			break;
		case 4:
			cout << "Fourteen \n";
			break;
		case 5:
			cout << "Fifteen \n";
			break;
		case 6:
			cout << "Sixteen \n";
			break;
		case 7:
			cout << "Seventeen \n";
			break;
		case 8:
			cout << "Eighteen \n";
			break;
		case 9:
			cout << "Nineteen \n";
			break;
		}
	}

	//If number is not between 10 and 19, prints tens' place
	else {
		switch (tens) {
		case 0:
			cout << "";
			break;
		case 2:
			cout << "Twenty ";
			break;
		case 3:
			cout << "Thirty ";
			break;
		case 4:
			cout << "Forty ";
			break;
		case 5:
			cout << "Fifty ";
			break;
		}

		// Prints the ones' place
		switch (singles) {
		case 0:
			cout << "\n";
			break;
		case 1:
			cout << "One \n";
			break;
		case 2:
			cout << "Two \n";
			break;
		case 3:
			cout << "Three \n";
			break;
		case 4:
			cout << "Four \n";
			break;
		case 5:
			cout << "Five \n";
			break;
		case 6:
			cout << "Six \n";
			break;
		case 7:
			cout << "Seven \n";
			break;
		case 8:
			cout << "Eight \n";
			break;
		case 9:
			cout << "Nine \n";
			break;
		}
	}

	//Pauses to show successful output
	system("pause");
}