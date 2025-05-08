#include<iostream>
using namespace std;

void fun(int n)            //inverted hour glass
{
	int i = 0, j = 0, k = 0;

	for (i = 0;i <= n;i++)
	{
		for (j = 0;j <= i;j++)
			cout << "* ";

		for (k = 0;k < 2*n - 2*i;k++)
			cout << "  ";

		for (j = 0;j <= i;j++)
			cout << "* ";

		cout << endl;
	}
	
	for (i = n-1;i >=0 ;i--)
	{
		for (j = 0;j <= i;j++)
			cout << "* ";

		for (k = 0;k < 2 * n - 2 * i;k++)
			cout << "  ";

		for (j = 0;j <= i;j++)
			cout << "* ";

		cout << endl;
	}
}

int main()
{
	int n = 5;
	fun(5);
}