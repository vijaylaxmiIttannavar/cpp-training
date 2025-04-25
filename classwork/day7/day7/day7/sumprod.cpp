#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int sum=0, p=0;
	int prod = 1;
	int dig = 0;
	
	while (n > 0)
	{
		dig = n % 10;
		sum = sum + dig;
		if (dig == 0)
		{
			dig = 1;
		}

		prod = prod * dig;
		n = n / 10;

		
	}
	cout << "sum = "<< sum << endl;
	cout<<"ptod = "<< prod << endl;
}