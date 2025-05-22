#include<iostream>
#include"digitalclock.h"
#include<cstring>
using namespace std;

int main()
{
	digitalclock d;
	d.setd(0, 0, 0);
	for (int i = 0; i < 100000000; ++i)
	{
		d.tick();
		d.disp();
		cout << endl;
	}
	

	return 0;
}