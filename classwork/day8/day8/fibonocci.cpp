#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int f = 0;
	int s = 1;
	int next = 0;
	while (next < n)
	{
		cout << next << endl;
		f = s;
		s = next;
		next = f + s;
	}
}