#include<iostream>
using namespace std;
void fun(void);   ////no argms and no return type

int main()
{
	int n;
	fun();
	cin >> n;
	switch (n)
	{
	default:
		cout << "wrong" << endl;
		break;
	case 1:
		cout << "add" << endl;
		break;
	case 2:
		cout << "sub" << endl;
		break;
	case 3:
		cout << "exit" << endl;
		break;
	}
	return 0;
}

void fun()
{
	cout << "press " << endl;
	cout << "1. add" << endl;
	cout << "2. sub" << endl;
	cout << "3. exit" << endl;
	cout << "choice" << endl;
}