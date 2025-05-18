#include<iostream>
using namespace std; 
#define M 1024
                               //sum of array
int fun(int*, int);
void disp(int);

int main()
{
	int n;
	cin >> n;
	int arr[M], ret=0;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	ret=fun(&arr[0], n);
	
	disp(ret); 
}

int fun(int* ptr, int n)
{
	int i = 0, sum = 0;
	for (i = 0;i < n;i++, ptr++)   //if we use *ptr insted of ptr[i] then u should inc ptr++ in loop
	{
		sum = sum + *ptr;
	}
	return sum;
}


void disp(int sum)
{
	cout << sum;
	
}