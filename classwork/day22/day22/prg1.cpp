#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	//cout << *ptr << endl;   //segementation fault bcz accesing nullptr

	int a = 10;
	cout << a << endl;
	cout << &a << endl;
	cout << ptr << endl;
	cout << &ptr << endl;

	ptr = &a;
	cout << ptr << endl;
	cout << *ptr << endl;

	*ptr = 20;
	cout << a << endl;
	cout << *ptr << endl;

	int arr[3] = { 1, 2, 3 };
	cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
	//int* ptr1 = nullptr;
	int ptr1 = &arr[0];
	cout << *ptr1 << endl;
	cout << *(ptr1+1) << endl;
	cout << *(ptr1 +2)<< endl;

}