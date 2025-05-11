#include<iostream>
using namespace std;
#define M 1024

void fun(int n, int* arr)
{
	int i = 0;
	int sum = 0;
	for (i = 0;i < n;i++)
	{
			sum = sum + arr[i];
	}
	cout <<"sum : "<<sum << endl;
	
}

int main()
{
	int n, i = 0;
	cin >> n;
	int arr[M];
	for (i = 0;i < n;i++)
		cin >> arr[i];
	fun(n, arr);
}