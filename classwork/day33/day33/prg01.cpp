#include<iostream>
using namespace std;

class base
{
public:
	virtual void fun()
	{
		cout << "base" << endl;
	}

	void bdisp()
	{
		cout << "bdisp" << endl;
	}
};

class derrived : public base
{
public:
	void fun()
	{
		cout << "dervid" << endl;
	}
	void ddisp()
	{
		cout << "ddisp" << endl;
	}
};

int main()
{
	derrived d;
	d.fun();        //local prints derived

	base* ptr = &d;    // new base;   or 
	ptr->fun();     //local base print

	
	//ptr->fun();       //prit child when virtual

	ptr->bdisp();

	//ptr->ddisp();   //cant


}