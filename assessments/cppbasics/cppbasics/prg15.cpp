#include<iostream>
using namespace std;

void fun(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		cout << "it is leaf year" << endl;
	}
	else
	cout << "not leaf year" << endl;
}

int main()
{
	int y;
	cin >> y;
	fun(y);
}