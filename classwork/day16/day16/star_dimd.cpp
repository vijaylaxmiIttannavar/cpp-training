#include<iostream>
#define M 1024
using namespace std;
int main()
{
	int n=7;
	//cin >> n;
	int i=0, j=0, k = 0, c = 0, l=0, m=0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < (n / 2) - i;j++)
		{
			cout << " ";
		}
		for (k = j;k <= n / 2;k++)
		{
			cout << "*";
		}
		for (l = j+1;l <= n/2;l++)
		{
			cout << "*";
		}
		for (m = k;m < (n- i);m++)
		{
			cout << " ";
		}
	cout << endl;
	}

}