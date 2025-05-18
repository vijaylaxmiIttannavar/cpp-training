#include<iostream>
using namespace std;
int main()
{
	int arr[3] = { 1, 2, 3 };
	cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
	int* ptr1 = nullptr;
	 ptr1 = &arr[0];
	cout << *ptr1 << endl;
	cout << *(ptr1 + 1) << endl;
	cout << *(ptr1 + 2) << endl;
}