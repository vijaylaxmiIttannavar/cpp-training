#include<iostream>
using namespace std;

class Person
{
private:
	string ssn;
protected:
	string name;
	char gen;
	int age;
public:
	Person(string s, string n, char g, int a): ssn(s), name(n), gen(g), age(a){}
	void disp()
	{

	}
};

class Employee :public Person
{
private:
	int e_id;
	float e_sal;
	string e_desg;
public:
	Employee(string ssn, string n, char g, int a, int id, float sal, string desg):Person(ssn, n, g, a){}
	cout << "emp constroctor called" << endl;

	~Person()
	{

	}
};