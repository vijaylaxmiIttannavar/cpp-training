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

	int max = arr[0];
	int min = arr[0];

	for (i = 0;i < n;i++)
	{		
			if (max < arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
	}
	cout << "max : " << max << endl;
	cout << "min : " << min << endl;
}