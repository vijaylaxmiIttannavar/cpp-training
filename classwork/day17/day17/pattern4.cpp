#include<iostream>
using namespace std;

void fun(int n)
{
	int c = 1;
	int i, j;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j <= i;j++)
			cout << c++<<" ";
		cout << endl;
	}
}

int main()
{
	int n = 4;
	fun(n);
}