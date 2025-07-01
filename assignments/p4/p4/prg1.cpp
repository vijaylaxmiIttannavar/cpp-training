#include<iostream>

using namespace std;

int main()
{
	char str[20];
	cin >> str;
	int len = strlen(str);
	int c = 0;
	for (int i = 0;i < len;i++)
	{
		for (int j = i;j < len;j++)
		{
			if (str[i] == str[j] - 32)
			{
				c++;
			}
			else if (str[i] == str[j] + 32)
			{
				c++;
			}
		}
	}

	cout << "len : " << c*2;
}