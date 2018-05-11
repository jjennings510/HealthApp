#include "exerciseNode.h"

exerciseNode::exerciseNode()
{
	next = NULL;
	prev = NULL;
}

void exerciseNode::setNext(exerciseNode* x)
{
	this->next = x;
}
void exerciseNode::setPrev(exerciseNode* x)
{
	this->prev = x;
}

exerciseNode* exerciseNode::getNext()
{
	return this->next;
}
exerciseNode* exerciseNode::getPrev()
{
	return this->next;
}
