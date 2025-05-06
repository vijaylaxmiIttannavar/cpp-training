#include<iostream>
using namespace std;
int main() {
	char str[50];
	char str1[50] = {'\0',};
	scanf("%[^\n]", str);
	int count = 0, i = 0, j = 0;
	while (str[i] != '\0')
	{
		str[i] = tolower(str[i]);
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			
		}
		else
		{
			str1[j++]=str[i];
			count++;
		
		}
		i++;
	
	}
	str1[j] = '\0';
//	
	cout << str1<<endl;
   cout << count << endl;
}
