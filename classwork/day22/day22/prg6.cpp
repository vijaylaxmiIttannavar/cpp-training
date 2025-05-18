#include<iostream>
using namespace std;
#define M 1024
//revesrse of array
void fun(int*, int);


int main()
{
	int n;
	cin >> n;
	int arr[M], ret = 0;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	fun(&arr[0], n);

	//disp(arr, n);
}

void fun(int *arr, int n)
{
	int i = 0, temp = 0;
	for (i = 0;i < n / 2;i++)   //if we use *ptr insted of ptr[i] then u should inc ptr++ in loop
	{
		temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n-i-1] = temp;
	}
	for (int i = 0;i < n;i++)
	{
		cout << arr[i]<< " " << endl;
	}
}
