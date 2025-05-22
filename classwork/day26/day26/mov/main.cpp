#include<iostream>
#include<cstring>
#include"movie.h"
using namespace std;

int main()
{
	movie m;

	char str[20];
	cin >> str;
	m.settitle(str);
	//m.settitle("hero");
	cin >> str;
	m.setgener(str);
	int s;
	cin >> s;
	m.setrate(s);
	m.disp();
	return 0;
}