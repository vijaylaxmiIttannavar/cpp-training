#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if(i+j<n)
			cout << "*";

		}
		cout << endl;
	}
}