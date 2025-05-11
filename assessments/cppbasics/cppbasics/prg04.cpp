#include<iostream>
using namespace std;

void fun(char ch)
{
	cout << "ASCII value of char is : " << int(ch) << endl;
}

int main()
{
	char ch;
	cin >> ch;
	fun(ch);
}