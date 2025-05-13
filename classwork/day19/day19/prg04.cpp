#include<iostream>
using namespace std;
int main()
{
	int a;           
	a = 10;
	/**
	int* ptr = (int *)10;   //illegal acces so core dump
	cout << *ptr << endl;  */

	int* ptr = (int*)malloc(sizeof(int)*3);
	int* temp = ptr;
	cout << "addr " << (unsigned long int)ptr << endl;
	*ptr = 201;
	ptr++;
	cout << "addr " << (unsigned long int)ptr << endl;
	*ptr = 203;
	ptr++;
	cout << "addr " << (unsigned long int)ptr << endl;
	*ptr = 301;
	ptr = temp;

	cout << ptr++ << endl;
	cout << ptr++ << endl;
	cout << ptr++ << endl;


}