#include<iostream>
#include<thread>
using namespace std;

void great()
{
	cout << "hello world" << endl;
}

int main()
{
	thread t(great);   //pass fun name
	t.join();       //.join() will attach process to main() if join no there means give abort error
	cout << "end pgm" << endl;


	//t.join();   //already executed so not joinable
	return 0;
}