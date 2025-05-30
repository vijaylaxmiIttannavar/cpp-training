#include<iostream>
using namespace std;

class base
{
public:
	virtual void fun() = 0;   //pure virtual fun has no body
};

class derrived : public base
{
public:
	void fun()
	{
		cout << "dervid" << endl;
	}
};

int main()
{
	derrived d;
	base* ptr = &d;    // new base;   or 
	ptr->fun();     //local derrived print
}