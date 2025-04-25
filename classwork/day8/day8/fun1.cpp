#include<iostream>
using namespace std;
void fun(void);
void fun1(int, int);

int main()
{
	int n;
	void fun();
	int v1, v2;
	cin >> n;
	cin >> v1 >> v2;
	switch (n)
	{
	default:
		cout << "wrong" << endl;
		break;
	case 1:
		cout << "add" << endl;
		fun1(v1, v2);
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

void fun1(int v1, int v2)
{
	cout << v1 + v2 << endl;
}

void fun()
{
	cout << "press " << endl;
	cout << "1. add" << endl;
	cout << "2. sub" << endl;
	cout << "3. exit" << endl;
	cout << "choice" << endl;
}