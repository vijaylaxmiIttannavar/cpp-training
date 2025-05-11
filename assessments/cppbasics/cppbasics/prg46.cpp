#include<iostream>
#include<math.h>
using namespace std;

void fun(int n)
{
	int temp = n, c = 0, dig = 0, sum = 0;;
	
	while (n > 0)
	{
		dig = n % 10;
		sum = sum + dig * pow(8, c);
		c++;
		n = n / 10;

	}
	cout << sum << endl;
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}