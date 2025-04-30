#include<iostream>
using namespace std;
int main()
{
	float bs, hra, gs, da;
	cin >> bs;
	hra = 0.40 * bs;
	da = 0.20 * bs;
	gs = bs + hra + da;
	cout << gs;

}