#include<iostream>
#include<cstring>
using namespace std;

int fun(char* str, int i, int len)
{
	int count = 0;
	if (i >= len)
	{
		return 1;
	}
	
    if (str[i] != str[len])
	{
		return 0;
	}
	return fun(str, i + 1, len - 1);
	
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	int i;
	int len = strlen(str);
	if (fun(str, 0, len - 1))
	{
		cout << "palindrome" << endl;
	}
	else
	{
		cout << "not palindrome" << endl;
	}
}