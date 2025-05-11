#include<iostream>
using namespace std;

int fun(int n)            //inverted hour glass
{
	int i = 0, j = 0, k = 0;
	if (n == 1 || n == 0)
		return 1;
	else
		return n * fun(n - 1);
	
}

int main()
{
	int n;
	cin >> n;
	int ret=fun(n);
	cout << "factorial : " << ret << endl;
}