#include<iostream>
#include<cstring>
using namespace std;

char fun(const char * str)
{
	int i = 0;
	int arr[26] = {0};

	for (i = 0;str[i] != '\0';i++)
		arr[(unsigned char)str[i]]++;

	for (i = 0;str[i] != '\0';i++)
	{
		if ( arr[(unsigned char)str[i]] == 1)
		{
			return str[i];
		}
	}

	return ' ';

}

int main()
{
	cout << fun("swiss");
}