#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a > b && b > c)||(a < b && b < c))
		cout <<b<< " is mid" << endl;
	else if ((b > c && c > a)|| (b < c && c < a))
		cout << c<<" is mid" << endl;
	else if((c>a && a > b)|| (c < a && a < b))
		cout << a<<" is mid" << endl;
}