#include<iostream>
using namespace std;

void fun(float k)
{
	float m;
	m = k * 1000;
	cout << m << endl;
}

int main()
{
	float k;
	cin >> k;
	fun(k);
}