#include<iostream>
using namespace std;
#define N 1024

int fun(int[], int);
void print(int[], int);

int main()
{
	int arr[9] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
	fun(arr, 9);
	return 0;
}

int fun(int arr[], int n)
{
	int i, j = 0, k = 0;
	int z[N], o[N];
	for (i = 0;i < n;i++)
	{
		if (arr[i] == 0)
			z[j++] = arr[i];
		else
			o[k++] = arr[i];
	}

	for (i = 0;i < k;i++)
		arr[i + k] = z[i];

	for (i = 0;i < j;i++)
		arr[i] = o[i];

	print(arr, 9);
	return 0;
}

void print(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
}
