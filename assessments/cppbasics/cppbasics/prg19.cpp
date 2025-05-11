#include<iostream>
using namespace std;

void fun(int n)
{
	int f = 0, i=0;
	int s = 1, next = 0;
	for(i=0;i<=n;i++)
	{
		if (i == n)
		{
			cout << next << endl;
			break;
		}
		f = s;
		s = next;
		next = f + s;
		
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}
