#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.142

void area(int r)
{
	float ar = 2 * PI * r * r;
	cout << ar << endl;
}

void crm(int r)
{
	float c = 2 * PI * r ;
	cout << c << endl;
}

int main()
{
	int r;
	cin >> r;
	area(r);
	crm(r);
}