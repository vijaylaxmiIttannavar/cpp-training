#include<iostream>
using namespace std;
#define M 1024

void fun(int n, int *arr)
{
	int i = 0, j = 0;
	int max = arr[0], min = arr[0];
	for (i = 0;i < n;i++)
	{
		if (arr[i] < max)
		{
			min = arr[i];
	    }
		if (arr[i] > min)
		{
			max = arr[i];
		}		   
	}
	cout << "max : "<<max << endl;
	cout << "min : "<<min << endl;
}

int main()
{
	int n, i=0;
	cin >> n;
	int arr[M];
	for (i = 0;i < n;i++)
		cin >> arr[i];
	fun(n, arr);
}