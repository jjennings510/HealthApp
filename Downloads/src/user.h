/*
 * user.h
 *
 *  Created on: May 3, 2018
 *      Author: Michael Wang
 */
#ifndef USER_H_
#define USER_H_
#include <iostream>
#include <string>


using namespace std;



class User
{
public:
	User();
	void displayInfo();
	void inputData();
	void setName();
	void setAge();
	void setWeight();
	void setHeight();
	void setGoal();


// getters that we arent using yet or maybe never
	/*
	string getName();
	int getWeight();
	int getHeight();
	string getGoal();\
	*/

private:
	string name;
	int age;
	double weight;
	int heightFt;
	int heightIn;
	string goal;
	double weightGoal;



};


#endif /* USER_H_ */
