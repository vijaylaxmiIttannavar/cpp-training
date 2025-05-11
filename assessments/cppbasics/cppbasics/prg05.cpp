#include<iostream>
using namespace std;

void fun(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		cout << "it is vowel " << endl;
	else
		cout << "it is consonant" << endl;
}

int main()
{
	char ch;
	cin >> ch;
	fun(ch);
}