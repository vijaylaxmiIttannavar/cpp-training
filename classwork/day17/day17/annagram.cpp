#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str1, char* str2)
{
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int i, j, c = 0;
	if (l1 != l2)
		cout << "not annagram" << endl;
	else
	{
		for (i = 0;str1[i] != '\0';i++)
		{
			for (j = 0;str2[j] != '\0';j++)
			{
				if (str1[i] == str2[j])
					c++;
			}			
		}
	}
	if (c == l1)
		cout << "it annagram" << endl;
	else
		cout << "not annagram" << endl;
}

int main()
{
	char str1[50], str2[50];
	cin >> str1 >> str2;
	fun(str1, str2);
}