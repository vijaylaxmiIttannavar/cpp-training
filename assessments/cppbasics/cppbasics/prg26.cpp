#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str2, char* str1)
{
	int i = 0, j = 0, count = 0;
	int l1 = strlen(str1);
	int l2 = strlen(str2);

	if (l1 != l2)
	{
		cout << "it is not annagram" << endl;
	}
	else
	{
		for (i = 0;i < l1;i++)
		{
			for (j = 0;j < l2;j++)
			{
				if (str1[i] == str2[j])
				{
					count++;
				}
			}
		}
		if (count == l1)
			cout << "it is annagram" << endl;
		else
			cout << "not annagram" << endl;
	}
}

int main()
{
	char str2[50], str1[50];
	cin.getline(str1, 50);
	cin.getline(str2, 50);
	fun(str2, str1);
}
