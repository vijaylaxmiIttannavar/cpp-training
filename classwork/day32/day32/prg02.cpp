#include<iostream>
using namespace std;

class A
{
protected:
	int a;
	void dispprot()
	{
		cout << "a : protected" << endl;

	}
public:
	A() { a = 10; }
	void dispA()
	{
		cout << " A : a= " << a << endl;
	}
};

class B :protected A    //private & public not acess bcz they become private to b
{
public:
	void dispB()
	{
		a = 20;
		dispA();
		dispprot();
	}
};

class C :protected B
{
public:
	void dispc()
	{
		dispB();
	}
};

int main()
{
	A obja;
	obja.dispA();
	cout << "====="<<endl;

	B objb;
	objb.dispB();
	//objb.dispA();

	C objc;
	objc.dispc();
	//objc.dispB();

}