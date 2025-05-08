#include<iostream>
using namespace std;

int fun(int n)
{
	int rev = 0, rem = 0;
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	return rev;
}

int main()
{
	int n;
	cin >> n;
	int temp = n;
	int ret=fun(n);

	if (temp == ret)
		cout << "yes its palindrom" << endl;
	else
		cout << "no its not palindrom" << endl;
}