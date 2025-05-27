#include<iostream>
using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
public:
	void init(int id, string n)
	{
		e_id = id;
		e_name = n;
	}
	void printdetails()
	{
		cout <<e_id << "\t" << e_name << endl;
	}
};

int main()
{
	Employee e;
	e.init(101, "abcdefg");
	e.printdetails();
}