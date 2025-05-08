#include<iostream>
#define M 1024
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[M];
	int i, j;
	for (i = 0;i < n;i++)
		cin >> arr[i];

	int fs = arr[0];
	int ss = arr[0];

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (arr[0] < arr[1])
			{
				fs = arr[0];
				ss = arr[1];
			}
			else
			{
				fs = arr[0];
				ss = arr[1];
			}
		}
	}
	for (i = 2;i < n;i++)
	{

	}
	
}