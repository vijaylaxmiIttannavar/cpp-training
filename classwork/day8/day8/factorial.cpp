#include<iostream>
using namespace std;

int fun(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return n * fun(n - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	int r;

	r=fun(n);

	cout << r;

}