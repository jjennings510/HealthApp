#include "foodNode.h"

foodNode::foodNode()
{
	next = NULL;
	prev = NULL;
}

void foodNode::setNext(foodNode* x)
{
	this->next = x;
}
void foodNode::setPrev(foodNode* x)
{
	this->prev = x;
}

foodNode* foodNode::getNext()
{
	return this->next;
}
foodNode* foodNode::getPrev()
{
	return this->next;
}
