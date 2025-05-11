#include<iostream>
#include<cstring>
using namespace std;
int fun(char* str, int i)
{
	if (str[i] == '\0')
		return 0;
	else
		return 1+fun(str, ++i);

}
int main()
{
	char str[50];
	cin.getline(str, 49);
	int ret=fun(str, 0);
	cout << ret;
}