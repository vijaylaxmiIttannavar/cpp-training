#include<iostream>
#include<cstring>
using namespace std;
char* fun(char* str)
{
	int len = 0, i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	char c;
	while (i < len)
	{
		char c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return str;
	
}
int main()
{
	char str[50];
	cin.getline(str, 49);
	char* s = fun(str);
	cout << s;
}