#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int amt = 0;
mutex m;
void add(int x)
{
	m.lock();
	cout << x << " x" << endl;
	x = x + 10;
	for (int i = 0;i < 1000;i++);
	m.unlock();

}

void sub(int y)
{
	m.lock();
	y = y - 20;
	cout << y << " y" << endl;
	m.unlock();
}

int main()
{
	thread t1(add, 100);
	thread t2(sub, 50);

	t2.join();
	cout << "amt add : " << amt << endl;

	t1.join();
	cout << "amt sub : " << amt << endl;

}