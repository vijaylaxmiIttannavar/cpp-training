#include<iostream>
using namespace std;

void fun(int n1, int n2)
{
	int gcd = 0, small=0, i=0;
	small = n1 < n2 ? n1 : n2;
	for (i = 2;i <= small;i++)
	{
		if (n1%i == 0 && n2%i ==0)
		{
			gcd = i;
			cout << "gcd : " << gcd << endl;
			break;
		}
	}
}

int main()
{
	int n1, n2;
	cin >> n1;
	cin >> n2;
	fun(n1, n2);
}
