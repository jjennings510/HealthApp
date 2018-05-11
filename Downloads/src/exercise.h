/*
 * workout.h
 *
 *  Created on: May 3, 2018
 *      Author: The Lesser One
 */

#ifndef EXERCISE_H_
#define EXERCISE_H_

#include <iostream>
#include <cstdlib>

using namespace std;

class exercise
{
public:
	//constructors
	exercise();
	exercise(string, string, int, double);//family,name,reps,weight
	//setters
	void setFamily(string);
	void setName(string);
	void setReps(int);
	void setWeight(double);
	//getters
	string getFamily();
	string getName();
	int getReps();
	double getWeight();
	//other
	void printWorkout();
private:
	string family;
	string name;
	int reps;
	double weight;
};

#endif /* EXERCISE_H_ */
