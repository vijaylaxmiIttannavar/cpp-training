#include<iostream>
using namespace std;       //max of 2 numbers using ptr & fun
int fun(int*, int*);
void disp(int);

int main()
{
	int a, b;
	cin >> a >> b;
	disp(a);
	cout<<"max : "<<fun(&a, &b);
}

int fun(int* a, int* b)
{
	return *a > *b ? *a:*b;	
}

void disp(int a)
{
	for (int i = 0;i < a;i++)
	{
		cout << "=";
	}
}