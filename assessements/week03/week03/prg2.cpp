/* program 2) print unique number*/
#include<iostream>
#define MAX 1024
using namespace std;

void fun(int n, int* arr)
{
	int i, j;
	int c;
	for (i = 0;i < n;i++)
	{
		c = 0;
		for (j = 0;j < n;j++)
		{
			if (arr[i] == arr[j])
			{
				c++;
			}
		}
		if (c == 1)
			cout << arr[i];
	}
	
}

int main()
{
	int n = 0;
	cin >> n;
	int arr[MAX];
	int i, ret = 0;
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	fun(n, arr);
}