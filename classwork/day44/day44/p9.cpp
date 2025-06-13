#include<iostream>
#include<thread>
#include<mutex>
#include<string>
using namespace std;

mutex m;
void fun1(string str)
{
	m.lock();
	cout << str << " " << endl;
	m.unlock();
}


int main()
{
	int i = 5;

	while (i!= 0)
	{
		thread t1(fun1, "ping");
		t1.join();

		thread t2(fun1, "pong");
		t2.join();
		i--;
	}

	
	
}