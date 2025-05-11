// Second smallest elements
#include <climits>
#include <iostream>
#define M 1024
using namespace std;

void fun(int *arr, int n)
{
    int first, second;
    if (n < 2) 
    {
        cout << " Invalid Input ";
        return;
    }

    first = second = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "no second smallest element\n";
    else
        cout << "Second smallest : " << second
        << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[M], i=0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    fun(arr, n);

    return 0;
}

/*
#include<iostream>
using namespace std;
#define M 1024

void fun(int n, int* arr)
{
	int i = 0, j = 0, temp=0;
	int max = arr[0], min = arr[0];
	for (i = 0;i < n;i++)
	{
		for (j = i;j < n;j++)
		{
			if (arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout <<"second smallest element : "<< arr[n - 2] << endl;
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
*/