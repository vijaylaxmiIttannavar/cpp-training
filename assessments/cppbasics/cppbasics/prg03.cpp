#include<iostream>
using namespace std;

void fun(int n)
{
	if (n%2 == 0)
		cout << "it is even number" << endl;

	else
		cout << "it is odd number" << endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}