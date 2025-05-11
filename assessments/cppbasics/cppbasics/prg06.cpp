#include<iostream>
using namespace std;

void fun(char ch)
{
	if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) 
		cout << "it is alphabet " << endl;
	else
		cout << "it is not alphabet" << endl;
}

int main()
{
	char ch;
	cin >> ch;
	fun(ch);
}