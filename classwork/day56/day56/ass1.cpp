#include<iostream>
using namespace std;
#define N 1024

int fun(int[], int);
void print(int[], int);

int main()
{
	int arr[8] = { 9, -3, 5, -2, -8, -6, 1, 3 };
	fun(arr, 8);
	return 0;
}

int fun(int arr[], int n)
{
	int i, j=0, k=0;
	int pos[N], neg[N];
	for (i = 0;i < n;i++)
	{
		if (arr[i] < 0)
			neg[j++] = arr[i];
		else
			pos[k++] = arr[i];
	}
	for (i = 0;i < k;i++)
		arr[i] = neg[i];	
	for (i = 0;i < j;i++)
		arr[i+k] = pos[i];
	print(arr, 8);
	return 0;
}

void print(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
}
