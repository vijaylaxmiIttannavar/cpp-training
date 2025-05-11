#include<iostream>
using namespace std;

void fun(int n)
{
	int temp = n;
	int temp1 = n;
	int rem = 0, sum = 0, c=0;

	while (temp1 > 0)
	{
		temp1 = temp1 / 10;
		c++;
	}

	while (n > 0)
	{
		rem = n % 10;
		sum = sum + pow(rem, c);
		n = n / 10;
		
	}

	if (sum == temp)
	{
		cout << "it is armstrong number" << endl;
	}
	else
	{
		cout << "it is not armstrong number" << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}