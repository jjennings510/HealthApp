/*
 * exerciseNode.h
 *
 *  Created on: May 3, 2018
 *      Author: The Lesser One
 */

#ifndef EXERCISENODE_H_
#define EXERCISENODE_H_


#include <iostream>
#include <cstdlib>
#include "exercise.h"
using namespace std;

class exerciseNode:public exercise
{
public:
	//setters
	void setNext(exerciseNode* x);
	void setPrev(exerciseNode* x);
	//getters
	exerciseNode* getNext();
	exerciseNode* getPrev();
	exerciseNode();
	exerciseNode *next;
	exerciseNode *prev;
};




#endif /* EXERCISENODE_H_ */
