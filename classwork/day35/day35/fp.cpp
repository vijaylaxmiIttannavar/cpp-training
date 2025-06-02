#include<iostream>
using namespace std;

void greet()
{
	cout << "hi all" << endl;
}

int fun(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int main()
{
	void (*fptr)() = greet;
    fptr();

	int (*funptr)(int, int) = fun;     //reusablity one ptr doing both add and sub
	cout << funptr(30, 20) << endl;
	funptr = sub;
	cout << funptr(30, 20) << endl;

}