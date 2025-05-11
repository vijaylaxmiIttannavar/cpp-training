#include<iostream>
using namespace std;

void fun(int n)
{
	int temp = n;
	int rem = 0, rev = 0;
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}

	if(rev==temp)
	{
		cout << "it is palindrome number" << endl;
    }	
	else
	{
		cout << "it is not palindrome number" << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}