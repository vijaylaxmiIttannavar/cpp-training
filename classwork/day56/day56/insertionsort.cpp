#include<iostream>
using namespace std;

int insertionsort(int[], int);
void print(int[], int);

int main()
{
	int arr[5] = { 3, 7, 2, 9, 1 };
	insertionsort(arr, 5);
	return 0;
}

int insertionsort(int arr[], int n)
{
	int i, j, key;
	for (i = 0;i < n;i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	print(arr, 5);
	return 0;
}

void print(int arr[], int n)
{
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
}
