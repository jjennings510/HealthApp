/*
 * foodDB.h
 *
 *  Created on: May 3, 2018
 *      Author: The Lesser One
 */

#ifndef FOODDB_H_
#define FOODDB_H_

#include <iostream>
#include "foodNode.h"

using namespace std;

class foodDB
{
public:
	foodDB();
//setters
	void add();
	void printHead_to_Tail();
	void setHead(foodNode* foodNode);
	void setTail(foodNode* foodNode);
	double computeCalorieIntake();//make copies of this for the other food stats
//getters
	foodNode* getHead();
	foodNode* getTail();
private:
	foodNode* head;
	foodNode* tail;
};

#endif /* FOODDB_H_ */
