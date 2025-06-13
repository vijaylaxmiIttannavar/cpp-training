#include<iostream>
#include<thread>
using namespace std;

void fun1(int n)
{  
	while (n != 11)
	{
		cout << n << " " << endl;
		n++;
	}
}
void fun2(int n)
{
	while (n != 21)
	{
		cout << n << " " << endl;
		n++;
	}
}


int main()
{
	int n=0;
	thread t1(fun1, n);
	thread t2(fun2, n);

	t2.join();
	t1.join();
}