#include<iostream>
using namespace std;

template<class T>
T Max(T a, T b)
{
	return a > b?a:b;
}


int main()
{
	cout << Max(40, 20) << endl;
	cout<<  Max(5.0, 10.0) <<endl;
	cout << Max(-1, -3) << endl;
	cout << Max('a', 'b') << endl;
	return 0;
}