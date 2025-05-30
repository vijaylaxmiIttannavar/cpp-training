#include<iostream>
using namespace std;

template<class T>
void myswap(T& a, T& b )
{
	int t = a;
	a = b;
	b = t;	
}


int main()
{
	int a = 5, b = 10;
	myswap(a, b);
	cout << a << " " << b << endl;
	float f1 = 2.0, f2 = 4.0;
	myswap(f1, f2);
	cout << f1 << " " << f2;

	return 0;
}