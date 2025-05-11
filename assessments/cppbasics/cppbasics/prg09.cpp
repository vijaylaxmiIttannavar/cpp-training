#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str)
{
	int i, count = 0;
	for (i = 0;str[i] != '\0';i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			count++;
	}
	
		cout << "count : " <<count << endl;
}

int main()
{
	char str[50];
	cin.getline(str, 49);
	fun(str);
}