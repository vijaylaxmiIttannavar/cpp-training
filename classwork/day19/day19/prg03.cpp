#include<iostream>
using namespace std;
int main()
{
	int arr[3] = { 10, 20, 30 };
	int* ptr = arr;
	cout << *ptr++ << endl;
	cout << ++*ptr << endl;
	cout << *++ptr << endl;
	ptr = arr;
	int prod = *ptr * *ptr;
	cout << "pr : " << prod << endl;
	cout << sizeof(ptr) << " ," << sizeof(void*) << endl;

}