#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int r = 0, s=0, c=0;

	while (n > 0)
	{
		r = n % 10;
		//if(r%2==0)
		//s = s + r;
		n = n / 10;
		c++;
	}

	
}