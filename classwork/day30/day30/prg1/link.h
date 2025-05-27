#pragma once
#include"node.h"

class LinkedList {
private:
	Node* head;
public:
	LinkedList() {

		head = nullptr;
	}
	//LinkedList(int) {}

	int addBeg(int);
	int addEnd(int);
	void addAfter(int, int);
	bool delNode(int);
	void display();
};