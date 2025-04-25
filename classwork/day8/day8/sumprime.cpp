#include<iostream>
using namespace std;

bool prime(int);

int main()
 {
	int n;
    cin >> n;
	//bool ret = prime(n);
	/*
		if (n <= 1)
		return false;
	if (ret == true)
		cout << "prime" < endl;
	else
		cout << "not prime" << endl; */

	int i, j;
	for (i = 0;i < n;i++)
	{
		if (prime(n) + prime(n) == n)
		{
			count++;
		}
	}
	cout << count << endl;	
}

bool prime(int n)
 {
	bool flag = false;
	for (i = 2;i < n;i++)
	{
		if (n % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}
}
