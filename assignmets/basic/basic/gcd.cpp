#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int i, p = 0;
	int min = 0;
	min = n1 < n2 ? n1 : n2;
	cout << "gcd " << endl;
	for (i = 1;i <= min;i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			i = p;
		}
	}
	cout << p<<endl;

}