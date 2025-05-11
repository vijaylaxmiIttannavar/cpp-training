#include<iostream>
using namespace std;

void fun(int n)
{
	int c = 0, i = 0;
	if (n > 1)
	{
		for (i = 2;i < n;i++)
	    {
		    if (n % i == 0)
		    {
			    cout << "it is not prime number" << endl;
			    c++;
			    break;
		     }
	    }
	    if (c == 0)
		cout << "it is prime number" << endl;
    }
	else
	{
		cout << "it is prime number" << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	fun(n);
}