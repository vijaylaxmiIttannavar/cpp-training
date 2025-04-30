#include<iostream>
using namespace std;

int fun(int n)
{
	if (n == 1)
		return 1;
	else
		return fun(n - 1);
}

int main()
{
	int n;
	int ret = 0;
	ret=fun(n);
		cout << ret;
}