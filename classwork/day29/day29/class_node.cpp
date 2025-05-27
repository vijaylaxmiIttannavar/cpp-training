#include <iostream>

using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int d=0)
	{
		data = d;
		next = nullptr;
	}
	int getData();
	int setData(int);
};

int Node::setData(int v) {
	data = v;
	return 0;
}

int Node::getData() {
	
	return data;
}

class LList
{
private:
	Node* n;
public:
	LList()
	{
		n = new Node;    //create node
	}
	//LList(int v){ }

	int addNodeBeg(int);
	int addNodeEnd(int);
void dispList();
};

int LList::addNodeEnd(int v)
{
	n->setData(v);
	return 0;
}
void LList::dispList()
{
	cout<<n->getData()<<endl;
}


int main()
{
	LList l1;
	l1.addNodeEnd(10);
	l1.dispList();
	//cout << sizeof(l1) << endl;
}