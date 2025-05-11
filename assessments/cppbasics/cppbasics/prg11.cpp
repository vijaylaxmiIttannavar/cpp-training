#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str, char* str1)
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if( (str[i] >= 65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))

			str1[j++] = str[i];
		else
		{

		}
		i++;		
	}
	str1[j] = '\0';
	cout << str1 << endl;
}

int main()
{
	char str[50], str1[50] = { '\0' };
	cin.getline(str, 50);
	fun(str, str1);
}
