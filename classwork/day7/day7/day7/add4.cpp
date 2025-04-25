#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	/*int arr[] = {0};
	arr[] = atoi(n); */
	int count = 0;
	int i, j, k, l;
	for (i = 1;i < n;i++)
	{
		for (j = i;j < n;j++)
		{
			for (k = j;k < n;k++)
			{
				for (l = k;k < n;k++)
				{
					if ((i + j + k + l == n))
					{
						cout << i<<"+" << j << "+" << k << "+" << l;
						count++;
					}
				}
			}
		}
	}
	if (count == 0)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << " count = " << count << endl;
	}
}

