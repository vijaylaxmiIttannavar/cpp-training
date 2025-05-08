#include<iostream>
using namespace std;
#include<math.h>

int fun(int n)
{
	int dig = 0, s , c = 0;	
	int i,j = 0 ;
	for (i = 1;i <= n;i++)
	{
		int num = i;
		int temp = i;
		c = 0;
		while (temp > 0)
		{
			temp = temp / 10;
			c++;
		}

		j = i;// i needed for next iteration dont work on it 
		s = 0;// need to reinitialized after every new i++
		while (j > 0)
		{
			dig = j % 10;
			s = s + pow(dig, c);
			j = j / 10;
		}
		if (num == s)//outside the loop
			cout << num << ' ';
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	int o = n;
	int i, ret;	
	
	fun(n);	
}