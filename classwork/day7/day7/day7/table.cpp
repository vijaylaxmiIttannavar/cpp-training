#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int i=0, j=0, p;
	int count = 0;
	/*
	for (n1 = 1;n1 <= 10;n1++)
	{
		for (n2 = 1;n2 <= 10;n2++)
		{
			p=n
		}

	}*/

	for (i=n1;i <= 10;i++)
	{
		count = 0;
		for (j=n2;j <= 10;j++)
		{
			
			count++;
			p = n1 * count;
			cout << n1 << "*" << count << "=" << p << endl;
			
		}

		cout << "====" << endl;
		n1++;
		if (n1 == n2+1)
		{
			break;
		}
	}
	
}


/*

////////another metrhod

for(i=n1;i<n2;i++)
{
for(j=1;j<10;j++)
{
cout<<i<<"x"<<j<<"="<<i*j<<endl;
}
cout<<"-----"<endl;
}
*/