#include<iostream>
#include "fun.h"
#include<string>
using namespace std;

void fun()
{
	char ch = 'A';
	char fn[20];
	string sn;

	cout << "ch " << ch << endl;
	cout << "enter ";
	cin >> fn;
	cout << " enter ";
	cin >> sn;

	cout << "name is " << fn << " " << sn << endl;

	char n[5] = "klmn";

	cout << sizeof(n) << endl;
	//scanf("%s", n);
	//int i = 0;
	for (int i = 0;i < 20;i++)
	{
		printf(" \n %c = %d", n[i], n[i]);
	}

}