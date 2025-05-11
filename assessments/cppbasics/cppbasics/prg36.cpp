#include<iostream>
#include<cstring>
using namespace std;
void* fun(char* str, int i, int len)
{	
	char c;
	if (i >= len)
		return NULL;
		 c = str[i];
		str[i] = str[len];
		str[len] = c;

	return fun(str, i+1, len-1);
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	int len = 0, i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	fun(str, 0, len-1);
	cout << str;
}