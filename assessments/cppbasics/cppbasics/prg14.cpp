#include<iostream>
using namespace std;

void fun(int n)
{
	int prod = 1;
	while (n > 0)
	{
		prod = prod*n;
		n--;
	}
	cout << "factorial : " << prod << endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}