#include "node.h"


int Node::setid(int id)
{
	e_id = id;
	return 0;
}

int Node::getid()
{
	return e_id;
}

char* Node::getname()
{
	return e_name;
}
void Node::setname(char* name)
{
	strcpy(e_name, name);
}

float Node::getsalary()
{
	return e_salary;
}
void Node::setsalary(float s)
{
	e_salary = s;
}

Node* Node::getNext()
{
	return next;
}
void Node::setNext(Node* nn)
{
	next = nn;
}