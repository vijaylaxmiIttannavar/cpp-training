#include<iostream>
using namespace std;

void fun(int n)
{
	int i = 0, j = 0, k = 0;
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
		for (j = 0;j < n - 1 - i;j++)
			cout << " ";
		for (k = 0;k <= i;k++)
			cout << "* ";

		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}