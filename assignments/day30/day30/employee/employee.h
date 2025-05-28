#pragma once
#include"node.h"
class Employee {
private:
	Node* head;
public:
	Employee() {

		head = nullptr;
	}	
	int  Add_Employee(int, char*, float);
	void Display_All_Employees();
	void Delete_Employee_ID(int);
	int Search_Employee_Name(char*);
	float Update_Salary_ID(int, float);
	void Count_Employees(int);
	//int	menu();

};

