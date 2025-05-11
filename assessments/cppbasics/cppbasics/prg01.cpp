#include<iostream>
using namespace std;

void fun(int n)
{
	if (n > 0)
		cout << "it is positive number" << endl;

	else if (n < 0)
		cout << "it is negetive number" << endl;

	else
		cout << "neither pos nor neg" << endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}