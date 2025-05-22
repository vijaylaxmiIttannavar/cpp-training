#include<iostream>
using namespace std;

typedef struct employee
{
	int id;
	string name;
}EMP;

int main()
{
	int* p = (int*)malloc(sizeof(int));  //one int
	*p = 10;   //assign value 10

	int* q = new int(10);

	cout << *p << " " << *q << endl;
	cout << sizeof(p) << " " << sizeof(q) << endl;

	int* arr = new int[10];
	cout << sizeof(arr) << " " << sizeof(*arr) << endl;

	for (int i = 0;i < 10;i++)
	{
		arr[i] = (i + 1) * 2;
	}
	for (int i = 0;i < 10;i++)
	{
		cout<<*arr++<<endl;
	}


	EMP* e = new EMP[10];
	EMP* e1 = new EMP{ 101, "vij" };

	cout << e1->id << " " << e1->name;

	delete e1;  //to delete value of 1 
	delete[] e1;    //to delete arr
}