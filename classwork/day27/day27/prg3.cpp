#include<iostream>
using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
public:
	Employee();     //default const	
	Employee(int, string);  //parameterized const
	
	void printdetails();       //print
	~Employee()                //destroctur used to cleanup memory
	{
		cout << "destroctur called" << endl;
	}
};
Employee::Employee()
{
	cout << "default constroctur called" << endl;
	e_id = 0;
	e_name = "";
}
Employee::Employee(int id, string n)
{
	cout << "parameter constroctur called" << endl;
	e_id = 102;
	e_name = "hello";
}
void Employee::printdetails()
{
	cout << "fun called" << endl;
	cout << e_id << "\t" << e_name << endl;
}

int main()
{
	Employee e;
	e.printdetails();
	Employee e1;
	e1.printdetails();
}