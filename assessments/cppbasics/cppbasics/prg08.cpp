#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str)
{
	int i;
	for (i = 0;str[i] != '\0';i++)
	{
		if (islower(str[i]))
			str[i]=toupper(str[i]);
		else if (isupper(str[i]))
			 str[i]=tolower(str[i]);
	}
	str[i] = '\0';
	cout << str;
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	fun(str);
}