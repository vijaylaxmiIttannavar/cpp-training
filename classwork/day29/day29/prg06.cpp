#include <iostream>
#include <cstdlib>
using namespace std;

class NODE
{
private:
	int data;
	class NODE* next;
public:
	NODE();
	 NODE* createNode();
     NODE* addNodeBeg(NODE*, NODE*);
     NODE* addNodeEnd( NODE*, NODE*);
	int dispList( NODE*);
	int dispMenu();

};

NODE::NODE()
{

}

int NODE:: dispMenu()
{
	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}

int NODE::dispList(NODE* head)
{
	cout << "\tList is " << endl;
	cout << "\t";
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
	return EXIT_SUCCESS;
}

 NODE* NODE:: addNodeEnd(NODE* head, NODE* nn)
{
	NODE* temp = head;
	if (head == NULL) {
		head = nn;
		return head;
	}
	while (head->next != NULL)
		head = head->next;
	head->next = nn;
	head = temp;
	return head;
}

NODE* NODE::addNodeBeg(NODE* head, NODE* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->next = head;
	head = nn;
	return head;
}

 NODE* NODE:: createNode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "Enter the value of node: ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}

int main()
{
	NODE* head = NULL, * nn = NULL;
	int ch = 1;
	while (ch)
	{
		switch (dispMenu())
		{
		case 1:

			head = addNodeBeg(head, createNode());
			break;
		case 2:
			head = addNodeEnd(head, createNode());
			break;
		case 3:
			dispList(head);
			break;
		case 4:
			ch = 0;
			break;
		default:
			cout << "Something went wrong" << endl;
		}
	}

	cout << "Exiting program...." << endl;
	return 0;
}
