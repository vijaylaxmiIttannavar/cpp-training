#include<iostream>
using namespace std;

void fun(int n)
{
	int i = 0, j = 0;

	for (i = 1;i <=n;i++)
	{
		for (j = 1;j <= i;j++)
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