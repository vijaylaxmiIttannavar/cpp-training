#include<iostream>
using namespace std;

void fun(int n)
{ 
	int sum = 0;
	while (n > 0)
	{
		sum = sum + n;
		n--;
	}
	cout << "sum of n natural number : " << sum << endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}