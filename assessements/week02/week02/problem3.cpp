/* problem - 3)armstrong problem */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = n;
	int d = 0, sum = 0;

	while (n > 0)
	{
		d = n % 10;
		sum = sum + d * d * d;
		n = n / 10;
	}
	//cout << sum;

	if (sum == temp)
	{
		cout << "Armstrong number" << endl;
	}
	else
	{
		cout << "not armstrong" << endl;
	}
}