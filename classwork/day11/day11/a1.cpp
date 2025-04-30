#include<iostream>
using namespace std;
int main()
{
	int arr[3];
	cout << "size of arr "<<sizeof(arr) << endl;
	cout << "arr[0] address "<< & arr[0] << endl;
	cout << "arr[1] address " << &arr[1] << endl;
	cout << "arr[2] address " << &arr[2] << endl;

	printf("arr[0] address %u\n", &arr[0]);
	printf("arr[1] address %u\n", &arr[1]);
	printf("arr[2] address %u\n", &arr[2]);
}