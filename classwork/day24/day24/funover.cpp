#include<iostream>
#include<cstring>

using namespace std;

int add(int v1, int v2)
{
	return v1 + v2;
}
int add(int v1, int v2, int v3)
{
	return v1 + v2 +v3;
}
/*
char* add(char* v1, char* v2)
{
	return strcat(v1, v2);
}*/

int main()
{
	char s1[] = "vij";
	char s2[] = "laxmi";

	cout << add(10, 20)<<endl;
	cout << add(10, 20, 30) << endl;
//	cout << add(s1, s2) << endl;
}