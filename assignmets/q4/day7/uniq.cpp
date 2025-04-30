#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int d = 0, p=0, s = 0, s1=0;

	while (n1 > 0)
	{
		d = n1 % 10;
		s = s + d;
		if (s == d)
		{
			s = 0;
		}
		n1 = n1 / 10;	
	}

	while (n2 > 0)
	{
		p = n2 % 10;
		s1 = s1 + p;
		if (s1 == p)
		{
			s1 = 0;
		}	
		n2 = n2 / 10;		
	}

	if (s == s1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}