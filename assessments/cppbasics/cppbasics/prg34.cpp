#include<iostream>
using namespace std;

void fun(int n)
{
	int i = 0, j = 0, c=1;

	for (i = 0;i < n;i++)
	{
		for (j = 0;j <= i;j++)
			cout << c++;
		cout << endl;

	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}