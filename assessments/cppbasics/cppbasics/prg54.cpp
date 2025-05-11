#include<iostream>
using namespace std;

void ftoc(float f)
{
	float c;
    c = 5 * (f - 32) / 9;
	cout << c << endl;
}

int main()
{
	float f;
	cin >> f;
	ftoc(f);
}