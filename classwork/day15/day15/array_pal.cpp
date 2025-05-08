#include<iostream>
using namespace std;
#define MAX 1024

int fun(int n, int* arr)
{
	int i, count=0;
	for (i = 0;i <n ;i++)
	{
		if (arr[i] != arr[n - 1-i])
		{
			count++;
			break;
	    }
    }
	return count;
}

int main()
{
	int n;
	cin >> n;
	int arr[MAX];
	int i = 0;
	for (i = 0;i < n;i++)
		cin >> arr[i];
	int ret =  fun(n, arr);

	if (ret==0)
		cout << "yes its palindrom array" << endl;
	else
		cout << "no its not palindrom array" << endl;
}