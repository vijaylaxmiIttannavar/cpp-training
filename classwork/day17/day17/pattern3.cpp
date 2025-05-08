#include<iostream>
using namespace std;       //hourglass
/*                                     
void fun(int n)
{
	int i = 0, j = 0, k = 0;
	
	for (i = 0;i <2*n-1;i++)
	{
		int cmp=0;
		if (i < n)
		{
			cmp=2*i + 1;
		}
		else
		{
			cmp = 2 * (2 * n - i) - 3;
		}

		for (j = 0;j < cmp;j++)
			cout << " ";
		
		for (k = 0;k <2*n-cmp;k++)
			cout << "*";
		
		cout << endl;
	}
}

int main()
{
	int n = 5;
	fun(n);
}*/

void fun(int n)
{
	int i = 0, j = 0, k=0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < i;j++)
			cout << " ";
		for (k = 0;k < n - i;k++)
			cout << "* ";

		cout << endl;
	}
	
	for (i = 1;i < n;i++)
	{
		for (j = 0;j < n-1-i;j++)
			cout << " ";
		for (k = 0;k <= i;k++)
			cout << "* ";

		    cout << endl;
	}
}

int main()
{
	int n = 5;
	fun(5);
}