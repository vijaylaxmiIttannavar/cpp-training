#include<iostream>
#include<thread>
using namespace std;

int amt = 0;
void add(int x)
{
	cout << x << " x" << endl;
	x = x + 10;
	for (int i = 0;i < 1000;i++);
	
}

void sub(int y)
{	
	y = y - 20;
	cout << y << " y" << endl;
}

int main()
{
	thread t1(add, 100);
	thread t2(sub, 50);

	t2.join();
	cout << "amt add : "<<amt << endl;

	t1.join();
	cout << "amt sub : " << amt<<endl;

}