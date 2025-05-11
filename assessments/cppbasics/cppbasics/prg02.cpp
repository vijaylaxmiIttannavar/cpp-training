#include<iostream>
using namespace std;

void fun(int a, int b, int c)
{
	if (a>b && a>c)
		cout <<a<< " is big" << endl;

	else if (b > c && b>a)
		cout <<b<< " is big " << endl;

	else
		cout <<c<<" is big" << endl;
}

int main()
{
	int a, b, c;
	cin >> a>>b>>c;
	fun(a, b, c);
}