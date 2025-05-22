#include<iostream>
#include<cstring>
#include"movie.h"
using namespace std;

void movie:: settitle( char* tit)
{
	strcpy(title, tit);
}
char* movie:: gettitle()
{
	return title;
}
void movie::setgener( char* gen)
{
	strcpy(gener, gen);
}
char* movie :: getgener()
{
	return gener;
}
void movie:: setrate(int rt)
{
	rate = rt;
}
int movie::getrate()
{
	return rate;
}

void movie::disp()
{
	if (rate >= 8 && rate <= 10)
		cout << "hit" << endl;
	else if (rate <= 7 && rate >= 4)
		cout << "avarage" << endl;
	else if (rate <= 3 && rate >= 0)
		cout << "flop" << endl;
	else
		cout << "out of" << endl;
}