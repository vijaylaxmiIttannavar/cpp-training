#include <iostream>
#include "node.h"
#include "employee.h"

using namespace std;

int Employee::Add_Employee(int e_id, char* name, float salary)
{
	Node* nn = new Node;
	nn->setid(e_id);
	nn->setname(name);
	nn->setsalary(salary);
	
	if (head == nullptr)
	{
		head = nn;
		
	}
	else
	{
		Node* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
	}
	cout << "Employee added: " << name << endl;
	return 0;
}

void Employee::Display_All_Employees()
{
	cout << "--- All Employees ---"<<endl;
	Node* temp = head;
	while (temp != nullptr) {
		cout <<"Id: "<< temp->getid() << ", Name: " << temp->getname() << ", Salary: " << temp->getsalary() << endl;
		temp = temp->getNext();
	}
}

void Employee::Delete_Employee_ID(int e_id)
{
	Node* temp = head;
	if (temp->getid() == e_id)
	{
		Node* fptr = temp->getNext();
		delete temp;
		head = fptr;
		return;
	}

	while (temp != nullptr) {
		if (temp->getNext()->getid() == e_id)
			break;
		temp = temp->getNext();
	}
	Node* fptr = temp;
	Node* sptr = temp->getNext() ;
	fptr->setNext(sptr->getNext()) ;
	delete sptr;
	cout << "Employee with ID " << e_id << " deleted." << endl;
}

int Employee::Search_Employee_Name(char* name)
{
	int c = 0, i=0;
	Node* temp = head;
	while (head != NULL)
	{
		if (*name == *head->getname())
		{
			c = 0;
			cout << "==search result==== " << endl;
		    Display_All_Employees();
			//cout << "emp name : " << name << endl;
			break;
		}
		/*else
		{
			c++;
			
		}*/
		head = head->getNext();
	}
	head = temp;
	if (c)
		cout << "not present" << endl;
	return 0;
}

float Employee::Update_Salary_ID(int id, float sal)
{
	 
	Node* temp = head;
	while (head != NULL)
	{
		if (id == head->getid())
		{
			head->setsalary(sal);
			cout << "Salary updated for ID " << id << endl;
			
			break;
		}
		else
		{
			head = head->getNext();
		}
	}
	head = temp;
	return sal;
}


void Employee::Count_Employees(int count)
{
	Node* temp = head;
	while (temp != nullptr)
	{
		count++;
		temp = temp->getNext();
	}
	cout << "Total Employees: " << count << endl;
}