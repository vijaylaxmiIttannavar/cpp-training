#include<iostream>                //hourglass
using namespace std;

void fun(int n)
{
	int i = 0, j = 0, k = 0;
	k = 2 * n - 2;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < k;j++)
			cout << " ";
		k = k - 1;

		for (j = 0;j <= i;j++)
		{
			cout << "*";
		}
		for (j = 0;j < i;j++)      //stop before i
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int n = 5;
	fun(n);
}