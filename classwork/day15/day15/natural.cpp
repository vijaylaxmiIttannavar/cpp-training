#include<iostream>
using namespace std;

void fun(int n)
{
	int sum = 0;
    for (int i = 1;i <= n;i++)
       sum += i;
	cout << "sum : " << sum << endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}