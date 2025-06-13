#include<iostream>
#include<thread>
using namespace std;

void backgrdtask()
{
	this_thread::sleep_for(chrono::seconds(3));
	cout << "backgrnd task done" << endl;
}

void fun(int& x)
{
	this_thread::sleep_for(chrono::seconds(10));
	x *= 3;	
}

int main()
{
	thread t(backgrdtask);
	t.detach();     //main wont work
	cout << "main is not blocked" << endl;
	this_thread::sleep_for(chrono::seconds(5));
	int val = 10;
	this_thread::sleep_for(chrono::seconds(10));
	cout << val<<endl;

	int p = 5;
	thread p1(fun, ref(p));
	p1.join();
	cout << p << endl;

	return 0;
}