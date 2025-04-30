#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int k=1;
	int n;
	cin >> n;
	int j;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (j % n == 0)
				cout << k;
			else
				cout << "*" << k;
			k++;
			j++;
		}
		cout << endl;
		i++;
	}
}