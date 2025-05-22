#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;


int main()
{
	int r = 3, c = 4;

	int** arr = (int**)malloc(sizeof(int*) * r);    //row allocation

	for (int i = 0;i < r;i++)     //col alloc
	{
		arr[i]= (int*)malloc(sizeof(int*) * c);
	}


	//input
	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << arr[i][j]<<"  ";
		}
		cout << endl;
	}
}
