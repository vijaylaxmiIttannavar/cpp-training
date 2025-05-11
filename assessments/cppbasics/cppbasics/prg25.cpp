#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str)
{
	int count = 0, i=0;
	int len = strlen(str);
	for(i=0;i<strlen(str)/2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			count++;
			break;
		}
	}
	if (count)
		cout << "not palindrom" << endl;
	else
		cout << "palindrome " << endl;
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	fun(str);
}