#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	int* temp = nullptr;
	int noofelem = 5;

	ptr = (int*)malloc(sizeof(int) * noofelem);
	
	temp = ptr;
	for (int i = 0;i < noofelem;i++, ptr++)
	{
		cout << "enter : " << i + 1 << " value " << endl;
		cin >> *ptr;
	}

	ptr = temp;
	for (int i = 0;i < noofelem;i++)
	{
		cout << (i + 1) << "value : " << ptr[i] << endl;
	}
}