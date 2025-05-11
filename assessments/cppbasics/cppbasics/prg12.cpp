#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str, char* str1)
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{

		}
			
		else
		{
			str1[j++] = str[i];
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
