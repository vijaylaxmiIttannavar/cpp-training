#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str, char* out)
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' )	{
		}		
		else
			out[j++] = str[i];
		i++;		
	}
	out[j] = '\0';
	cout << out;
}

int main()
{
	char str[50];
	cin.getline(str, 49);    //scanf("%[^\n]",str); for this in c++ we use this cin.getline(str, 49);  bcz str[50]
	char out[50] = { '\0', };
	fun(str, out);
}

/*  another method is 
* {
*     if(str[i] == ' ')
*          continue;
*     else
*          out[j++]=str[i]
* }
*/

//or

/*
* if(atr[i]!=' ')
* out[j++]=str[i];
*/
