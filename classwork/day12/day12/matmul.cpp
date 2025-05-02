#include<iostream>
using namespace std;

#define row 10
#define col 10
int main()
{
	int arr[row1][col1];
	int arr1[row2][col2];
	int i, j, k;
	int r1=0, c1=0, r2=0, c2=0;
	cin >> r1 >> c1 >> r2 >> c2;
	
	if (r2 == c1)
	{
		for (i = 0;i < r1;i++)
		{
			for (j = 0;j < c2;j++)
				cin >> arr[i][j];
		}
		for (i = 0;i < r1;i++)
		{
			for (j = 0;j < c2;j++)
				cin >> arr1[i][j];
		}
	}

	int res[r1][c2];
	int sum = 0;
	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c2;j++)
		{
			res[i][j] = 0;
			for (k = 0, sum=0;k < c1;k++)
			{
				 sum += arr1[i][k] * arr1[k][j];
				 res[i][j] = sum;
			}	
		}
	}

	for (i = 0;i < r1;i++)
	{
		for (j = 0;j < c2;j++)
		{
			cout << res[i][j]<<" ";
		}
		cout << endl;
	}


	
}