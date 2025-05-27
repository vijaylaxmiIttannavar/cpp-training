#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	int e_id;
	char e_name[50];
	float e_salary;
	Node* next;
public:
	Node(int id = 0) 
	{
		e_id = id;
		e_salary = 0.0;
		next = nullptr;
	}

	int getid();
	int setid(int);

	char* getname();
	void setname(char*);

	float getsalary();
	void setsalary(float);

	Node* getNext();
	void setNext(Node*);

};