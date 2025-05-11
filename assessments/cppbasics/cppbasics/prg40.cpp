#include<iostream>
#include<cstring>
using namespace std;
int fun(char* str)
{
	int i = 0, sum=0;
	for (i = 0;i < strlen(str);i++)
	{
		if (isdigit(str[i]))
		sum = sum + str[i] - '0';
	}
	return sum;

}
int main()
{
	char str[50];
	cin.getline(str, 49);
	int ret = fun(str);
	cout << ret;
}