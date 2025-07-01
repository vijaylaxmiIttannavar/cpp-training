#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

node* fun(node* head, int k)
{
	if (head == NULL || k <= 1)      /////////
	{
		return head;
	}
	node* c = head;
	int count = 0;

	while (c != NULL && count <= k)
	{
		c = c->next;
		count++;
	}

	if (count < k)
	{
		return head;
	}

	node* p = NULL;
	node* c = head;
	node* next = NULL;
	int count = 0;

	while (c != NULL && count < k)
	{
		next = c->next;
		c->next = p;
		p = c;
		c = next;
		count++;
	}

	if (next != NULL)
	{
		head->next = fun(next, k);
	}
	return p;
}