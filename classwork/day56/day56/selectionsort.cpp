#include<iostream>
using namespace std;
int fun(int arr[], int n)
{
	int i, j, minIndex;
	for (i = 0;i < n;i++)
	{
		minIndex = i;
		for (j = i + 1;j < n;j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		if (minIndex != i)
		{
			swap(arr[minIndex], arr[i]);
		}
	}
	return 0;
}

int swap(int arr[], int n, int minIndex)
{
	int i = 0;
	int temp = arr[minIndex];
	arr[minIndex] = arr[i];
	arr[i] = temp;
	return 0;
}

void print(int arr[], int n)
{
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[5] = { 3, 7, 2, 9, 1 };
	fun(arr, 5);
	print(arr, 5);
}