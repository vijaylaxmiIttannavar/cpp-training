#include<iostream>
using namespace std;

void fun(int n)
{
	int i = 0, j = 0, k = 0;

	for (i = n;i >= 1;i--)
	{
		for (j = n;j > i;j--)
			cout << " ";

		for (k = 1;k <= 2 * i - 1;k++)
			cout << "*";

		cout << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}