#include <iostream>
#include<cstdlib>
using namespace std;

typedef struct node {
	int data ;
	struct node* next;
}NODE;

int main()
{
	NODE* nn = NULL, * head = NULL, * temp = NULL;
	int ch = 1;
	while (ch)
	{
		nn = (NODE*)malloc(sizeof(NODE));  // or/  nn = new int[NODE];     (mem alloc)
		cout << "enter value of node: ";
		cin >> nn->data;    //initialzation
		nn->next = NULL;

		if (head == NULL)
		{
			//empty list to fill value
			head = nn;   //1st node
			temp = nn;
		}
		else
		{
			head->next = nn;
			head = head->next;   //make relationship
		}
		cout << "do u want to add new node(0/1): ";
		cin >> ch;
	}
	head = temp;
	while (head != NULL)
	{
		cout << head->data << "->";
		head = head->next;
	}
	cout << "NULL" << endl;
	return 0;
}