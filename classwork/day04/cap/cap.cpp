#include<iostream>
#define MAX 100;
using namespace std;
int main()
{
	int capcur, unusedcap = 0;
	cout << "enter cur cap";
	cin >> capcur;
	unusedcap = MAX - capcur;
	if (unusedcap == 0)
	{
		cout << "storage full" << endl;
	    return 0;
	}
	cout << "you can store" << endl;
}