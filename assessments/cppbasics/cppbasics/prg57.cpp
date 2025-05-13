#include<iostream>
using namespace std;

void fun(int n1, int n2)
{
	n1 = n1 ^ n2;
	n2 = n1 ^ n2;
	n1 = n1 ^ n2;

	cout << n1 << endl;
	cout << n2 << endl;
	
}

int main()
{
	int n1, n2;
	cin >> n1>>n2;
	fun(n1, n2);
}