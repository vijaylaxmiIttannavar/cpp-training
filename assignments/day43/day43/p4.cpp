/*
3
{[()]}
{[(])}
{{[[(())]]}}
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	char str[20];
	cin >> n;
	int t = n;
	while (t > 0)
	{
		cin >> str;
		t--;
	}
	int l = strlen(str);
	int c = 0;
	while (n > 0)
	{
		for (int i = 0; i <= l / 2;i++)
		{
			if (str[i] == '(' && str[l - i - 1] == ')')
			{
				c++;
			}
			else if (str[i] == '{' && str[l - i - 1] == '}')
			{
				c++;
			}
			else if (str[i] == '[' && str[l - i - 1] == ']')
			{
				c++;
			}
		}
		if (l / 2 == c)
		{
			cout << "yes";
			c = 0;
		}
		else
		{
			cout << "no";
			c = 0;
		}
		n--;
	}
}

