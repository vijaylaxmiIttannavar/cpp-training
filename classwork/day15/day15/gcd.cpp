#include<iostream>
using namespace std;

void fun(int n1, int n2)
{
	int gcd = 0, i;
	int ret = n1 < n2 ? n1 : n2;

	/*
	if (max / min == 0)
	{

	}*/

	for (i = ret;i >= 2;i--)
	{
		if ((n1 % i == 0) && (n2 % i == 0))
		{
			gcd = i;
			break;
		}
	}
	cout << gcd << endl;
}

int main()
{
	int i = 0;
	int n1, n2;
	cin >> n1 >> n2;
	fun(n1, n2);
}
	
