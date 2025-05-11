#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str)
{
	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	cout << count << endl;
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	fun(str);
}