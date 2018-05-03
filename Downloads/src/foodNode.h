/*
 * foodNode.h
 *
 *  Created on: May 3, 2018
 *      Author: The Lesser One
 */

#ifndef FOODNODE_H_
#define FOODNODE_H_

#include <iostream>
#include <cstdlib>
#include "food.h"
using namespace std;

class foodNode:public food
{
public:
	//setters
	void setNext(foodNode* x);
	void setPrev(foodNode* x);
	//getters
	foodNode* getNext();
	foodNode* getPrev();
	foodNode();
	foodNode *next;
	foodNode *prev;
};


#endif /* FOODNODE_H_ */
