#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	auto odd = [](int n) { for (int i = 0;i <= n;i++) { if (i % 2 != 0) { return i; } }};
	for (int i=0;i<=n;i++)
	{
		cout << "odd: " << odd(n) << endl;
	}

		
}