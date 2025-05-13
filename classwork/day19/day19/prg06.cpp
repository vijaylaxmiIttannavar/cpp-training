#include<iostream>
using namespace std;

void swap1(int, int);           //call by val
void swap2(int*, int*);         // call  by  pointer
void swap3(int&, int&);         //  call by  ref

int main()
{
	int a=10, b=20;
	//swap1(a, b);
	//swap2(&a, &b);
	swap3(a, b);
	cout << a << '\t' << b << endl;
}
void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
void swap2(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
void swap3(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}