#include<iostream>
#include<cstdlib>
using namespace std;

void disp(char[]);
void fun(const char[]);

int main()
{
	char s[] = "vijaylaxmi";
	disp(s);
	fun("hi");
}

void disp(char name[])
{
	while (*name != '\0')
		cout << *name++;
	cout << endl;	
}
void fun(const char name[]) //passing constant name in fun() rather than vaeible that time use const
{
	while (*name != '\0')
		cout << *name++;
	cout << endl;
}








