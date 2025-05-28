#include<iostream>
using namespace std;

class Data
{
public:
	int a;
	void print()
	{
		cout << " a is " << a << endl;
	}
};

int main()
{
    Data d, * dp;
	dp = &d;

	int Data ::*ptr = &Data::a;    //to take ref

	d.*ptr = 10;
	d.print();

	dp->*ptr = 20;
	dp->print();

	Data v;
	//int* pp = &a;   //local declaration
	v.a = 15;
	v.print();

	return 0;
}