#include<iostream>
using namespace std;

class A
{
private:
	int x;
protected:
	int y;
	void prom() { cout << "a pro" << endl; }
public:
	A() {
		x = 10; y = 20;
		cout << "constructor a called" << endl;
	}
	void dispA() {
		cout << "hello A" << endl;
		cout << "x= " << x << " y= " << y<<endl;
	}
};

class B : public A
{
private:
	int a;
protected:
	int b;
public:
	B() { a = 11; b = 22;
	cout << "constructor b called" << endl;
	}
	void dispB() { cout << "hello B" << endl;
	cout << "a= " << a << " b= " << b<<endl;
	}
	void call()
	{
		cout << y;
		prom();
	}
};

int main()
{
	A a;
	B b;

	a.dispA();
	b.dispB();
	b.dispA();
	//a.dispB();  can't
	//b.prom(); can't becoz its protected
	b.call();

}