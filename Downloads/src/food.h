/*
 * food.h
 *
 *  Created on: May 3, 2018
 *      Author: The Lesser One
 */
//somosa? mon wed 6pm GET THIS ONE!!!!!
#ifndef FOOD_H_
#define FOOD_H_

#include <iostream>
#include <cstdlib>

using namespace std;

class food
{
public:
//constructor
	food();
//getters
	string getName();
	double getCalorie();
	double getFat();
	double getCholesterol();
	double getSodium();
	double getCarbs();
	double getProtein();
	void printNutritonFacts();
//setters
//	void setName();
//	void setCalorie();
//	void setProtein();
//	void setCarbs();
private:
	string name;
	double calories;
	double totalFat;
	double cholesterol;
	double sodium;
	double carbs;
	double protein;
};

#endif /* FOOD_H_ */
