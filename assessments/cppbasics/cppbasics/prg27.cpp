#include<iostream>
using namespace std;

void fun(int n)
{
	int i = 0, j = 0, k = 0;
	int s = n - 1;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < s;j++)
		{
			cout << " ";
		}
		for (j = 0;j <= i;j++)
		{
			cout << "* ";
		}
		cout << endl;
		s--;		
	}
	s = 0;
	for (i = n;i > 0;i--)
	{
		for (j = 0;j < s;j++)
		{
			cout << " ";
		}
		for (j = 0;j < i;j++)
		{
			cout << "* ";
		}
		cout << endl;
		s++;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}