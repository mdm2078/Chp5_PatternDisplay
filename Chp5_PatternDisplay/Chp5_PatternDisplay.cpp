// Chp5_PatternDisplay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	// Introductory Statement
	cout << "This program displays two patterns using loops." << endl;
	cout << "Pattern A will display an increasing number of '+'characters," << endl;
	cout << "and Pattern B will display a decreasing number of '+' characters." << endl;

	// Display Pattern A
	cout << "\nPattern A" << endl;
	for (int i = 1; i <= 10; ++i) { // Loop for each line in Pattern A
		for (int j = 1; j <= i; ++j) {
			cout << "+";
		}
		cout << endl;
	}

	// Display Pattern B
	cout << "\nPattern B" << endl;
	for (int i = 10; i >= 1; --i) {  // Loop for each line in Pattern B
		for (int j = 1; j <= i; ++j) {
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}

