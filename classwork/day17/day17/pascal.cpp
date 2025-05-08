#include<iostream>
using namespace std;
#define M 1024
#define N 1024

void fun(int n)
{
	int i, j;
	int c = 1;
	int ar[M][N];
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if (j == n)
			{
				c++;				
			}
			
		}
		cout << c << endl;
	}
}

int main()
{
	int n = 10;
	fun(10);
}