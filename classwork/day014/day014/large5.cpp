#include<iostream>
using namespace std;
/*
int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a > b && a > c && a > d && a > e)
		cout << a << " = is  grater" << endl;
	else if (b > c && b > d && b > e && b > a)
		cout << b << " = is  grater" << endl;
	else if (c > a && c > b && c > d && c > e)
		cout << c << " = is  grater" << endl;
	else if (d > a && d > b && d > c && d > e)
		cout << d << " = is  grater" << endl;
	else
		cout << e << " = is  grater" << endl;
}
*/

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int high = a;
	if (b > high)
		high = b;
	if (c > high)
		high = c;
	if (d > high)
		high = d;
	if (e > high)
		high = e;
	cout << high << endl;
}