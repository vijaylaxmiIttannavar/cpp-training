#include<iostream>
#include<cstring>
using namespace std;
void fun(char* str)
{
	int len = 0, i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	
	char c;	
	for (i = 0;i <len-1;i++)
		if (str[i] == ' ')
		{
			str[i - 1]=str[i];
		}
		cout << str[i];
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	fun(str);

}