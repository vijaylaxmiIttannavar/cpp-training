#include<iostream>
using namespace std;

int fun(int);

int main()
{
	int r = 0;
	r = fun(5);
	cout << "ret " << r << endl;;
	return 0;
}

int fun(int v)
{
	                     //// if we keep cout in first line means will get o/p as 543210
	if (v <= 0)
		return 1;
	v--;
	fun(v);
	cout << v << endl;     ///o/p is 01234
}

