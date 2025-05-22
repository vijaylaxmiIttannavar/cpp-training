#include<iostream>
#include<cstring>
#define fun2(a)  a*a
using namespace std;

inline int fun1(int v1)
{
	return v1*v1;
}

int main()
{
	cout << fun1(2+3)<< endl;
	cout << fun2(2+3) << endl;
	int a=10, b=5, c=0;
	c=a+b;
	cout << c << endl;
	int v = 10;
	int &&u = 101;
	cout << v << " " << u << endl;
	char* str = "vijay";
	cout << str << endl;
	cout << "laxmi" << endl;
}