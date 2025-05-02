#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "before swap" << endl;
	cin >> n1 >> n2;

	n1 = n1 ^ n2;
	n2 = n1 ^ n2;
	n1 = n1 ^ n2;
	cout << "after swap" << endl;
	cout << n1 << endl;
	cout << n2 << endl;
}