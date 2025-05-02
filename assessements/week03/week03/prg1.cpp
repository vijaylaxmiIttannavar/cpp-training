#include<iostream>
#include<cstring>
using namespace std;
int t = -1;
void fun(char *str)
{
int i, j;
int p = 0, q = 0;
int sum = 0;
//cout << str;
int len = strlen(str);

for (i = 0;i < len;i++)
{

	if ((str[i] == 'a') && (str[i + 1] == 'r') && (str[i + 2] == 'e'))
	{
		p = i;
		break;
	}
	else
		p = t;
}
for (i = 0;i < len;i++)
{

	if (str[i] == 'i')
	{
		q = i;
		break;
	}
	else
		q = t;

}
//cout << p <<q<<endl;
cout << p + q << endl;
}

int main()
{

	char str[50];
	scanf("%[^\n]s", str);

	fun(str);
}
	