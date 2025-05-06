#include<iostream>
using namespace std;
int main() {
	char str[50];
	scanf("%[^\n]",str);
	int count=0, i;
	for (i = 0;str[i] != '\0';i++)
	{
		str[i] = tolower(str[i]);
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			count++;
	}
	cout << count << endl;	
}
