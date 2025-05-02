#include<iostream>
#define MAX 100
using namespace std;
void fun(int n, int *arr)
{
	int i, j;
	int c = 0;
for (i = 0;i < n;i++)
{
	c = 0;
	for (j = i;j < n;j++)
	{
		if (arr[i] > arr[j])
		{
			c++;
		}
	}
	cout << c << " ";
}
}


int main()
{
	int n;
	cin >> n;
	int arr[MAX];
	int i, j;
	
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	
	fun(n, arr);
}