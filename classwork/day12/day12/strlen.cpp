//implement string lenght function by passing to function

#include<iostream>
#include<cstring>
using namespace std;

int fun(char *str)
{
	int count = 0;
	char* temp = str;
	while (*temp != '\0')
	{		
		temp++;
		count++;
	}
	return count;	
}

int main()
{
	char str[50];
	scanf("%[^\n]", str);
	int res = fun(str);
	printf("%d", res );
}

