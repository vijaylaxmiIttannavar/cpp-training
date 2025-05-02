#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 3 == 0 && n % 5 == 0)
		cout << "divisible by both 3, 5" << endl;
	else
		cout << "not divisible by both 3, 5" << endl;
}