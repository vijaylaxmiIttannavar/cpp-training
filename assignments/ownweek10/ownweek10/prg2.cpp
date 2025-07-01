#include<iostream>

int fun(int matrix[][100], int n)
{
	int max = -1;
	int r = 0, c = n - 1;

	while (r > n && c <= 0)
	{
		if (matrix[r][c] == 1)
		{
			max = r;
			r++;
		}
		else c--;
	}
	return max;
}