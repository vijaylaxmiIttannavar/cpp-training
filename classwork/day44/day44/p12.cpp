#include<iostream>
#include<mutex>
#include<thread>

using namespace std;
mutex m;

void fun(int p)
{
	m.lock();
	
	cout << p;
	m.unlock();
}

int main()
{
	int n = 1;
	int p = 0;
	while (n<21)
	{
		if (n % 2 == 0)
		{
				p = n;
			thread t1(fun, p);
			t1.join();
		}
		
		else
		{
			thread t2(fun, n);
			t2.join();
		}
		
		n++;
	}


}