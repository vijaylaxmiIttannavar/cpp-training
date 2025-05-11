#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str, char*str1)
{
	int i = 0, j = 0;
	while(str[i] != '\0')
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{

		}
		else
		{
			str1[j++] = str[i];
		}
		i++;
	}
	str1[i] = '\0';
	cout << str1 << endl;
}

int main()
{
	char str[50], str1[50]={'\0', };
	cin.getline(str, 49);
	fun(str, str1);
}