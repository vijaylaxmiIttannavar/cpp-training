#include<iostream>
using namespace std;
#include<math.h>

int fun(int n)
{
	int dig = 0, s = 0, c=0;
	int temp = n;
	while (temp > 0)
	{
		temp = temp / 10;
		c++;
	}
	
	while (n> 0)
	{
		dig = n % 10;
		s = s + pow(dig, c);
			n = n / 10;
	}	
	return s;
}  

int main()
{
	int n;
	cin >> n;
	int o = n;
	int ret=fun(n);
	if (ret == 0)
		cout << "armstrong" << endl;
	else
		cout << "not armstrong" << endl;
}