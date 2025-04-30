#include<iostream>
using namespace std;
int main()
{
	int m1, m2, m3, m4, m5;
	cout << "mark = ";
	cin >> m1>>m2>>m3>>m4>>m5;
	int max = 100;
	int agr = 0;
	int s = 5;
	float p;

	agr = m1 + m2 + m3 + m4 + m5;

	p = ((float)agr / (float)500) * 100;

	cout << "agr = " << agr << endl;
	cout << "per = " << p << endl;
	cout < "program completed" << endl;
}