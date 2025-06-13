#include<iostream>
#include<thread>
using namespace std;

void great()
{
	cout << "hello world" << endl;
}
void disp(int x)
{
	cout << x << endl;
}
void fun(int &x)
{
	x *= 3;
}

int main()
{
	thread t(great);   //pass fun name
	t.join();       
	cout << "end pgm" << endl;

	thread t1(disp, 10);   //call by val
	t1.join();

	int val = 5;
	thread t2(fun, ref(val));   //call by ref
	t2.join();
	cout << val<<endl;
	
	return 0;
}