#include<iostream>
using namespace std;

class Employee
{
public:
	int e_id;
	string e_name;
};

int main()
{
	Employee e;
	e.e_id = 101;
	e.e_name = "vijaya";
	cout << e.e_id << "\t" << e.e_name << endl;

	Employee* ptr = &e; //we can able to change the value bcz it is public thats y we have to use private
	ptr->e_id = 201;
	cout << e.e_id << "\t" << e.e_name << endl;
}