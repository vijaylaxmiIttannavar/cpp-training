#include<iostream>

using namespace std;

int fun(int);

int main()
{
	int r=100;
	int ret = fun(r);
	cout << ret << endl;

    ret = fun(r);
	cout << ret << endl;
}

int fun(int v)
{
	static int t = 1000;
	t = t + v;

	return t;
}