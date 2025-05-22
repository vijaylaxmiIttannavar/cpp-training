#pragma once

/**Digital Clock Simulation -Create a class DigitalClock with members hour, minute, and
second.Add a function tick() that increments the time by one second and handles overflow.*/

class digitalclock
{
private:
	int hour;
	int minute;
	int second;
public:
	void setd(int, int, int);
	int getd();
	int tick();
	void disp();
};
