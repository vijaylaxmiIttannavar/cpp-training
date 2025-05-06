#include<iostream>
#include<cstring>
using namespace std;

char ltrim(char* str)
{
	int i = 0;
	for (i = 0; str[i] != '\0';i++) {
		char temp = str[i];
		str[i + 1] = str[i];
		return str[i] = temp;
	}
}

int main()
{
	char str[50];
	cin >> str;
	int i=0;
	int len = strlen(str);
	if (str[i] == ' \t' || (str[i] == ' ' && str[i + 1] == ' '))
	 ltrim(str);
	//else if (str[len] == ' \t' || (str[len] == ' ' && str[len - 1] == ' '))
	//rtrim(str);
	//else if ((str[i] == ' \t' || (str[i] == ' ' && str[i + 1] == ' ')) && (str[len] == ' \t' || (str[len] == ' ' && str[len - 1] == ' ')))
	//trim(str);
	
	cout << str;
}