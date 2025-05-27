#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE;

NODE* creatnode();
NODE* addbegin(NODE*, NODE*);
NODE* addend(NODE*, NODE*);
NODE* search(NODE*, int, NODE*);
NODE* delet(NODE*, int);
NODE* updt(NODE*, NODE*);
int list(NODE*);
int menu();
void freeNodes(NODE*);


int main()
{
	int ch = 1;
	NODE* head = NULL, * nn = NULL;
	int n_data=0, d_data=0;
	while (ch)
	{
		switch (menu())
		{
		case 1:
			head = addbegin(head, creatnode());
			break;
		case 2:
			head = addend(head, creatnode());
			break;
		case 3:
			list(head);
			break;
		case 4:
			head = search(head, n_data, nn);
			break;
		case 5:
			head = delet(head, d_data);
			break;
		case 6:
			head = updt(head, delet(head, d_data));
			break;
		case 7:
			ch = 0;
			break;
		default:
			cout << "invalid" << endl;
		}
	}
	cout << "exited " << endl;
	return 0;
}

NODE* creatnode()
{
	NODE* nn = (NODE*)malloc(sizeof(NODE));
	cout << "enter node data : ";
	cin >> nn->data;
	nn->next = NULL;
	return nn;
}

int menu()
{
	int ch;
	cout << "chose option \n 1.add begin\n 2.add end\n 3.list \n 4.search\n 5.delete\n 6.update\n 7.exit " << endl;
	cin >> ch;
	return ch;
}

NODE* addbegin(NODE* head, NODE* nn)
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

NODE* addend(NODE* head, NODE* nn)
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

int list(NODE* head)
{
	while (head != NULL)
	{
		cout << head->data << "->";
		head = head-> next;
	}
	cout << "NULL";
	cout << endl;
	return  0;
}

NODE* search(NODE* head, int n_data, NODE* nn)
{
	cout << "enter node which u want to search: ";
	cin >> n_data;
	int c = 0;
	NODE* temp = head;
	while (head != NULL)
	{ 
		if (n_data == head->data)
		{	
		     c = 0;
			 cout << "in the list " << n_data << " is present" << endl;
			 break;
		}
		else
		{
			c++;	
			head = head->next;
		}	
	}
	head = temp;
	if(c)
	cout << "not present" << endl;
	return EXIT_SUCCESS;
}

NODE* delet(NODE* head, int d_data)
{
	cout << "enter node which u want to delete: ";
	cin >> d_data;

	NODE* temp =  head;
	NODE* prev= head ;

	while (temp->next != NULL &&  prev!=NULL)
	{
		if (d_data == head->data)
		{
			NODE* m = prev->next;
			prev->next = prev->next->next;
			free(m);
		}
		prev = prev->next;
	}
	return EXIT_SUCCESS;
}

NODE* updt(NODE* head, NODE* delet)
{
	while (head != NULL)
	{
		//cout << head->data << "->";
		head = head->next;
	}
	//cout << "NULL";
   //	cout << endl;

	return EXIT_SUCCESS;
}

void freeNodes(NODE* head)
{
	NODE* temp = head;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}