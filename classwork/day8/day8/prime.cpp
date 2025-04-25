#include<iostream>
using namespace std;

void fun(int);               //bool fun(int)  ----- another way using bool data type

int main()
{
	int n;
	cin >> n;
	fun(n);
}

void fun(int n)
{
	int i;
	int count = 0;       //bool count = false ---------assign with booleam as false
	if (n > 1)
	{
		for (i = 2;i <= n / 2;i++)
		{
			if (n % i == 0)
			{
				count++;               //bool count = true --------- boolean as true
				cout << "its not prime" << endl;
				break;
			}
		}


		if (count == 0)
		{
			cout << "prime its" << endl;
		}
	}
	else
	{
		cout << "not prime" << endl;
	}

}


/*                           ///another method
* bool prime(int);
* 
* int main()
* {
*    int n;
*    cin>>n;
*    bool ret=prime(n);
*    
*    if(n<=1)
*         return false;
*    if(ret==true)
*         cout<<"prime"<endl;
*    else
*         cout<<"not prime"<<endl;
*  
* }
* 
* bool prime(int n)
* {
* bool flag = false;
*   for (i = 2;i < n;i++)
	{
		if (n % i == 0)
		{
			flag = true ;
			break;
		}
	}
	if(flag == 0)
	     return true;
	else
	     return false;
	}
}
*/