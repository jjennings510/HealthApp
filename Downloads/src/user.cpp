/*
 * user.cpp
 *
 *  Created on: May 3, 2018
 *      Author: Michael Wang
 */

#include "user.h"

#include <iostream>
#include <string>
#include <sstream>


using namespace std;



User::User()
{
	name = '\0';
	weight = 0;
	heightFt = 0;
	heightIn = 0;
	goal = '\0';
	weightGoal = 0;

}

void User::displayInfo()
{
	cout << name << endl;
	cout << weight << endl;
	cout << heightFt << "\' " << heightIn << "\" " << endl;
	cout << weightGoal << endl;
	cout << goal << endl;

}



void User::setName()
{
	cout << "What is yo name? \n" << endl;

	getline (cin, name);
	getline (cin, name);

}

void User::setAge()
{
	cout << "Age? \n" << endl;
	cin >> age;
}

void User::setWeight()
{
	cout << "Weight in lbs? \n" << endl;
	cin >> weight;
}

void User::setHeight()
{
	cout << "Height in feet? \n" << endl;
	cin >> heightFt;

	cout << "Height in inches? \n" << endl;
	cin >> heightIn;

}

void User::setGoal()
{

	cout << "What is your goal weight?" << endl;
	cin >> weightGoal;

	cout << "Give a brief paragraph about how you expect to achieve that. \n" << endl;

	getline(cin, goal);
	getline(cin, goal);

}


void User::inputData() {




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
			setName();
			break;

		case '2':
			cout << "You chose to input weight.\n" << endl;
			setWeight();
			break;

		case '3':
			cout << "You chose to input height.\n" << endl;
			setHeight();
			break;

		case '4':
			cout << "You chose to input goal.\n" << endl;
			setGoal();
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









