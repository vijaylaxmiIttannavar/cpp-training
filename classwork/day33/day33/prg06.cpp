#include<iostream>    //hybrid = heraricle + multilevel
using namespace std;

class A
{
public:
	int a;
	void dispa()
	{
		cout << " a " << endl;
	}
};

class B : virtual public A   //use virtual
{
public:
	//a = 0;
	void dispb()
	{
		cout << " b " << endl;
	}

};

class C : virtual public A
{
public:
	void dispc()
	{
		cout << " c " << endl;
	}
};

class D : public B, public C
{
public:
	void dispd()
	{
		cout << " d " << endl;
	}
};

int main()
{
	D d;
	d.dispa();    //acessing
	d.dispb();

	
//or	d.C::dispa();    // another method to solve diamond
	return 0;
}