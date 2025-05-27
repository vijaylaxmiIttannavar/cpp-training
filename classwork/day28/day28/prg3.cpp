#include <iostream>
#define MAX 5
using namespace std;

class Employee
{
private:
	int top;
	int bottom;
	char e_name[20];
	int e_id;
	int arr[MAX];
	char str[20];
	int len;
	int p;
	
public:
	Employee();

	int push(int id, const char*);
	int pop();
	void display();
};

Employee::Employee()
{	
   //	e_id = id;
	//strcpy(e_name, n);
	top = -1;
	bottom = -1;
	len = strlen(e_name);
	p = len--;
	p = MAX;
}

int Employee::push(int id, const char* name)
{
	if ((top == MAX - 1)&&(top == p -1))
	{
		cout << "Stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = id;
	for(int i=0;i<strlen(e_name);i++)
	str[top] = e_name[top];

	return 0;
}

int Employee::pop()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << " got popped out" << endl;
	cout << e_name[top] << "removed" << endl;
	top--;
	return 0;
}

void Employee::display()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	cout << "====Stack Elements are===" << endl;
	for (int i = top;i >= 0;i--)
	{
		cout << arr[i] << endl;
		cout << e_name[i] << endl;
	}
	cout << endl;
}

int main()
{
	Employee e;
    e.push(101, "vij");
	e.push(102, "ram");
	e.push(103, "raj");
	e.push(104, "ajay");
	e.push(105, "radha");
	e.push(60, "arpu");
	e.display(); 

	/*e.push(101);
	e.push(102);
	e.push(103);
	e.push(104);
	e.push(105);
	e.push(60);
	e.display(); */

	e.pop();
	e.pop();
	e.pop();
	e.pop();
	e.pop();
	e.pop();

	return 0;
}


