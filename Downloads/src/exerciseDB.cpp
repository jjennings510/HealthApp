#include "exerciseDB.h"

exerciseDB::exerciseDB(){//constructor sets head and tail to NULL
	setHead(NULL);
	setTail(NULL);
}
//Setters
void exerciseDB::setHead(exerciseNode* exerciseNode)
{
	head = exerciseNode;
}
void exerciseDB::setTail(exerciseNode* exerciseNode)
{
	tail = exerciseNode;
}

//Getters
exerciseNode* exerciseDB::getHead()
{
	return head;
}
exerciseNode* exerciseDB::getTail()
{
	return tail;
}

//misc functions
void exerciseDB::add(string inputFamily, string inputName, int inputReps, double inputWeight)//creates and adds a node of exercise data
{
    exerciseNode *newexercise = new exerciseNode;
    newexercise->prev = tail;  // inserting at front
    newexercise->next = NULL;

    if (tail != NULL)
    {
    	tail->next = newexercise;
    }
    tail = newexercise;
    if (head == NULL)
    {
    	head = newexercise;
    }
    newexercise->setFamily(inputFamily);
    newexercise->setName(inputName);
    newexercise->setReps(inputReps);
    newexercise->setWeight(inputWeight);
}

//void exerciseDB::printHead_to_Tail()//prints list from head to tail
//{
//	exerciseNode* current;
//	current = getHead();
//	while (current != NULL)
//	{
//		current->printNutritonFacts();
//		current = current->next;
//	}
//}
//
//double exerciseDB::computeCalorieIntake()//make clones of this for the other exercise stats
//{
//	exerciseNode* current;
//	current = getHead();
//	double totalCalories = 0;
//	while (current != NULL)
//	{
//		totalCalories += current->getCalorie();
//		current = current->next;
//	}
//	return totalCalories;
//}

