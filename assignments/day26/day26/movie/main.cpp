#include<iostream>
#include<cstring>
#include"movie.h"
using namespace std;

int main()
{
	movie m;
	cout << "enter movie name : ";
	char str[20];
	cin >> str;
	m.settitle(str);
	cout << endl;
	cout << "enter movie type : ";
	cin >> str;
	m.setgener(str);
	int s;
	cout << endl;
	cout << "enter movie rating : ";
	cin >> s;
	m.setrate(s);
	m.disp();
	return 0;
}