#include<iostream>
#include<cstring>
#include"bank.h"

using namespace std;

int main()
{
	bank b;
	cout << "enter bankholder name && balace" << endl;
	char str[20];
	int r;
	cin >> str;
	cin >> r;
	cout << "1.deposit 2.withdraw 3.checkbalance" << endl;
	cout << "enter choice : " << endl;
	int c;
	cin >> c;
	int depo, with;
	b.setholder(str);
	b.setbalance(r);


	switch (c)
	{
	case 1:
		cout << "enter depo : " << endl;
		cin >> depo;
		b.deposit(depo);
		break;
	case 2:
		cout << "enter with : " << endl;
		cin >> with;
		b.withdraw(with);
		break;
	case 3:
		b.checkbalance();
		break;

	}

	return 0;
}