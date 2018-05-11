#include "exercise.h"

	//constructors
exercise::exercise()
{
	family = "none";
	name = "\0";
	reps = 0;
	weight = 0;
}
exercise::exercise(string inputFamily, string inputName, int inputReps, double inputWeight)
{
	family = inputFamily;
	name = inputName;
	reps = inputReps;
	weight = inputWeight;
}
	//setters
void exercise::setFamily(string inputFamily)
{
	family = inputFamily;
}
void exercise::setName(string inputName)
{
	name = inputName;
}
void exercise::setReps(int inputReps)
{
	reps = inputReps;
}
void exercise::setWeight(double inputWeight)
{
	weight = inputWeight;
}
	//getters
string exercise::getFamily()
{
	return family;
}
string exercise::getName()
{
	return name;
}
int exercise::getReps()
{
	return reps;
}
double exercise::getWeight()
{
	return weight;
}
