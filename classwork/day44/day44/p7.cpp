#include<iostream>
#include<thread>
using namespace std;

void fun1(int n)
{
	int i=1;
	while (i < n )
	{
		if (i % 2 == 0)
			cout <<i<< ": even " << endl;
		else
			cout << i<<": odd " << endl;
		i++;
	}
}


int main()
{
	int n = 10;
	thread t1(fun1, n);
	thread t2(fun1, n);

	t2.join();
	t1.join();
}