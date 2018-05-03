//============================================================================
// Name        : healthapp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "user.h"

using namespace std;

void inputData(User x);

int main() {
	char choice;
	int y = 0;

	User jacob;

	do {
		cout << "     HEALTH FITNESS APP " << endl;
		cout << "=====================================" << endl;
		cout << " 1. Display current information.\n" << endl;
		cout << " 2. Input/change user data. \n" << endl;
		cout << " 3. " << endl;
		cout << " 4. Meal " << endl;
		cout << " 5. workout " << endl;
		cout << " 6. Exit   " << endl;
		cout << "=====================================" << endl;
		cout << "\nEnter Your Choice: ";
		cin >> choice;
		switch (choice) {
		case '1':
			cout << "You chose Chevron.\n" << endl;
			jacob.displayInfo();
			break;

		case '2':
			cout << "You chose input data. " << endl;
			jacob.inputData();
			break;

		case '3':
			cout << "You chose Goal. " << endl;
			break;

		case '4':
			cout << "You chose Valero. " << endl;
			break;

		case '5':
			cout << "You chose Arco. " << endl;
			break;

		case '6':
			y = 1;
			break;

		default:
			cout << "Enter a Valid Choice." << endl;

		}
		cout << endl;

	} while (y != 1);

	return 0;
}

#if 0
void inputData(User &jacob) {




	char choice;
	int y = 0;

	do {
		cout << "=====================================" << endl;
		cout << " 1. Input name.\n" << endl;
		cout << " 2. Input weight.\n" << endl;
		cout << " 3. Input height.\n" << endl;
		cout << " 4. Input goal.\n" << endl;
		cout << " 5. Exit   " << endl;
		cout << "=====================================" << endl;
		cout << "\nEnter Your Choice: ";
		cin >> choice;
		switch (choice) {
		case '1':
			cout << "You chose to input name.\n" << endl;
			jacob.setName();
			break;

		case '2':
			cout << "You chose to input weight.\n" << endl;
			jacob.setWeight();
			break;

		case '3':
			cout << "You chose to input height.\n" << endl;
			jacob.setHeight();
			break;

		case '4':
			cout << "You chose to input goal.\n" << endl;
			jacob.setGoal();
			break;

		case '5':
			y = 1;
			break;

		default:
			cout << "Enter a Valid Choice." << endl;

		}
		cout << endl;

	} while (y != 1);

}
#endif
