/* problem - 3)armstrong problem */

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = 0;
	int num = 0;
	int d = 0, sum = 0;

	while (temp != 0)
	{
		temp /= 10;
		num++
	}
	int temp = n;

	while (temp != 0)
	{
		d = temp % 10;
		sum = sum + pow(d, num);
		temp = temp / 10;
	}
}
if(sum == n)
	if (sum == temp)
		cout << "Armstrong number" << endl;
	else
		cout << "not armstrong" << endl;
}