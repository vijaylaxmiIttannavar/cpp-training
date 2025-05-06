#include<iostream>
using namespace std;
int main(){
	char ch;
	cin >> ch;
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		ch = tolower(ch);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			cout << "it is vowel" << endl;
		else
		{
			cout << "it is consonents" << endl;
		}
	}
	else
	{
		cout << "it is not alphabhate" << endl;
	}
}
