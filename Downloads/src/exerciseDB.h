/*
 * exerciseDB.h
 *
 *  Created on: May 3, 2018
 *      Author: The Lesser One
 */

#ifndef EXERCISEDB_H_
#define EXERCISEDB_H_



#include <iostream>
#include "exerciseNode.h"

using namespace std;

class exerciseDB
{
public:
//constructors
	exerciseDB();
//setters
	void setHead(exerciseNode* exerciseNode);
	void setTail(exerciseNode* exerciseNode);
//getters
	exerciseNode* getHead();
	exerciseNode* getTail();
//other fuctions
	void add(string, string, int, double);//args:family,name,reps,weight
	void printHead_to_Tail();
	double computeCalorieIntake();//make copies of this for the other exercise stats
private:
	exerciseNode* head;
	exerciseNode* tail;
};


#endif /* EXERCISEDB_H_ */
