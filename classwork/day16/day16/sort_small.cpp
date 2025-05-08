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

	int max = 0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (arr[j] < arr[j + 1])
			{
				max = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = max;
			}
		}
	}
	for (i = 0;i < n;i++)
		cout << arr[i] << " ";

	cout << "\nsecond largest elemnt : " << arr[n-2] << endl;

}