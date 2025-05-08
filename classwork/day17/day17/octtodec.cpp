#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int n=67;
	int s = 0;
	int dig=0, c=0, h=0;

	while (n > 0)
	{
		dig=n % 10;
		s = s + dig * pow(8, c) ;
		n = n / 10;
		c++;
	}
	cout << s << endl;
	///////////

	

}