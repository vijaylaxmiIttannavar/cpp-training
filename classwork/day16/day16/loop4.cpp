#include<iostream>
using namespace std;
int main()
{
	int n = 6;
	//cin >> n;
	int i = 0, j = 0, k = 0, c = 0, l = 0, m = 0;
	for (i = 0;i < n/2;i++)
	{
		for (j = 0;j < (n / 2) ;j++)
		{
			cout << "*";
		}
		for (k = 0;k <= n / 2;k++)
		{
			cout << "*";
		}
        cout << endl;
		for (l = 0;l <=n / 2;l++)
		{
			cout << "*";
		}
		for (m = 0;m < n /2;m++)
		{
			cout << "*";
		}
		cout << endl;
	}
}