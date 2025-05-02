#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int d = 0, s = 0;
	while (n >= 10)
	{
		s = 0;
		while (n > 0)
		{
			d = n % 10;
			s = s + d;
			n = n / 10;
		}
		n = s;
	}
	cout << s;
}