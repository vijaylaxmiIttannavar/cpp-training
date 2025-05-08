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
	
	char t;
	 for (i = 0;i <= len/2;i++)
	 {
		  t = str[i];
		  str[i] = str[len - i - 1];
			 str[len- i-1] = t;
	 }
	 return str;

    /*
	 len--;
	char c;
	while (i<len)
	{
		char c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	cout << str;*/	
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	char* s= fun(str);
	cout << s;
}