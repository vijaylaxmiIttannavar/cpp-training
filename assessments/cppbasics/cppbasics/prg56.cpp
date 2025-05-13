#include<iostream>
using namespace std;

void fun(int n)
{
	int term = 1, i=0;
	for (i = 0;i < n;i++)
	{
		term = term * 2;
	}
         cout<<term<< endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}