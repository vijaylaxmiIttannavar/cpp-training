#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m1;
mutex m2;

void fun1()
{
	lock_guard<mutex>lock1(m1);
	this_thread::sleep_for(chrono::seconds(3));
	lock_guard<mutex>lock2(m2);
	cout << "thread 1" << endl;
}

void fun2()
{
	lock_guard<mutex>lock2(m2);   //deadlock happened - how to resolve this by keeeping lock in same order
	this_thread::sleep_for(chrono::seconds(3));
	lock_guard<mutex>lock1(m1);
	cout << "thread 2" << endl;
}

int main()
{
	thread t1(fun1);
	thread t2(fun2);

	t1.join();
	t2.join();

	return 0;
}
