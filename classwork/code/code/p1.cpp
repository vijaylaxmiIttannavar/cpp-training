#include<iostream>
using namespace std;
#define N 100

void fun(int, int, int, int, int, int);


void fun(int day, int basic, int alow, int pf, int tax)
{
	cout << "--------payroll--------" << endl;
	int did = 0;
	int gros = 0;
	if (day >= 25 && day <= 31)
	{
		did = 0;
		cout << "salary not deducted" << endl;
	}
	else if (day >= 20 && day <= 25)
	{
		did = basic * (5 / 100);
		cout << "salary 5% deducted" << endl;
	}
	else if (day >= 15 && day <= 20)
	{
		did = basic * (10 / 100);
		cout << "salary 10% deducted" << endl;
	}
	else if (day >= 10 && day <= 15)
	{
		did = basic * (15 / 100);
		cout << "salary 15% deducted" << endl;
	}
	else if (day >= 5 && day <= 10)
	{
		did = basic * (20 / 100);
		cout << "salary 20% deducted" << endl;
	}
	else if (day >= 32)
	{
		cout << "not valid" << endl;
	}
	else
	{
		did = basic;
		cout << "salary all deducted" << endl;
	}
	gros = basic + alow - pf - tax - did;

	cout << "basic : " << basic << endl;
	cout << "alowance : " << alow << endl;
	cout << "pf : " << pf << endl;
	cout << "tax : " << tax << endl;
	cout << "salary : " << gros << endl;
	cout << endl;
}

int main()
{
	int i = 0;
	//int p;
	//cout << "how many employe u want : ";
	//cin >> p;
	for (i = 0;i < N;i++)
	{
		char name[50];
		cout << " enter emp name : ";
		cin >> name;
		int empid;
		cout << " enter emp id : ";
		cin >> empid;
		int day;
		cout << "enter how many days u worked in 30 days : ";
		cin >> day;
		cout << "chioce below\n 1.junior\n 2.senior\n 3.manager\n 4.director " << endl;
		int ch;
		cin >> ch;

		switch (ch)
		{
		case 1:
			cout << "junior salary update" << endl;
			{
				int basic = 20000;
				int alow = 10000;
				int pf = 1000;
				int tax = 1000;
				cout << "actual salary : 30000 " << endl;
				fun(day, basic, alow, pf, tax);

			}
			break;

		case 2:
			cout << "senior salary update" << endl;
			{
				int basic = 40000;
				int alow = 15000;
				int pf = 1000;
				int tax = 1000;
				cout << "actual salary : 55000 " << endl;
				fun(day, basic, alow, pf, tax);
			}
			break;

		case 3:
			cout << "manager salary update" << endl;
			{
				int basic = 60000;
				int alow = 20000;
				int pf = 1000;
				int tax = 1000;
				cout << "actual salary : 80000 " << endl;
				fun(day, basic, alow, pf, tax);
			}
			break;
		case 4:
			cout << "director salary update" << endl;
			{
				int basic = 80000;
				int alow = 30000;
				int pf = 1000;
				int tax = 1000;
				cout << "actual salary : 110000 " << endl;
				fun(day, basic, alow, pf, tax);
			}
			break;

		}
	}
}