#include<iostream>
#include"digitalclock.h"
#include<cstring>
using namespace std;

void digitalclock::setd(int hr, int min, int sec)
{
	hour = hr;
	minute = min;
	second = sec;
}

int digitalclock::getd()
{
	return hour;
	return minute;
	return second;
}

int digitalclock::tick()
{
	second++;
	if (second == 60)
	{
		minute++;
		second = 0;
	}
	if (minute == 60)
	{
		hour++;
		minute = 0;
	}
	return 0;
}

void digitalclock::disp()
{
	cout << hour << " : " << minute << " : " << second << endl;
}
