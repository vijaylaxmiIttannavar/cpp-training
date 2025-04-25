#include<iostream>
#include<calc.h>
using namespace std;

int main()
{
	int n1, n2;
	int a, b;
	cin >> n1 >> n2;

	a = add(n1, n2);
	b = sub(n1, n2);
	cout << "add = " << a << endl;
	cout << "add = " << b << endl;
}
