#include<iostream>
#include<thread>
#include<mutex>
#include<string>
using namespace std;

mutex m;
void fun1(string str)
{
	m.lock();
		cout << str;
	m.unlock();
}

int main()
{
	int i = 5;
	while (i != 0)
	{
		thread t1(fun1, "A");
		t1.join();
		thread t2(fun1, "B");
		t2.join();
		thread t3(fun1, "C");
		t3.join();

		i--;
	}
}