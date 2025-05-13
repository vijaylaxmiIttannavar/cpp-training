#include<iostream>
#define MAX 50
int salaryCalc(int, int, int, int, int);
using namespace std;
int main()
{
	int n;
	int empid[MAX];
	string empname[MAX];
	string desig[MAX];
	int basic[MAX];
	int allow[MAX];
	int PF[MAX];
	int tax[MAX];
	int gross[MAX];
	int red[MAX];
	int salary[MAX];

	cout << "Enter the number of employees:" << endl;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << "Enter id:" << endl;
		cin >> empid[i];

		cout << "Enter Name:" << endl;
		cin >> empname[i];

		cout << "Enter designation:" << endl;
		cin >> desig[i];

		cout << "Enter Basic:" << endl;
		cin >> basic[i];

		cout << "Enter Allowance:" << endl;
		cin >> allow[i];

		cout << "Enter PF:" << endl;
		cin >> PF[i];

		cout << "Tax:" << endl;
		cin >> tax[i];
	}

	cout << endl;
	cout << endl;
	cout << "------------------PAYSLIP----------------------" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "id:" << empid[i] << endl;
		cout << "Name:" << empname[i] << endl;
		cout << "Designation:" << desig[i] << endl;
		cout << "Basic Pay:" << basic[i] << endl;
		cout << "allowance:" << allow[i] << endl;
		cout << "PF:" << PF[i] << endl;
		cout << "Tax:" << tax[i] << endl;

		int days;
		cout << "Enter number of Days worked:" << endl;
		cin >> days;
		int did[MAX];

		if (days >= 25 && days <= 30)
		{
			cout << "no salary deduct" << endl;
		}
		else if (days >= 20 && days <= 25)
		{
			did[i] = basic[i] * (5 / 100);
		}

		else if (days >= 15 && days <= 20)
		{
			did[i] = basic[i] * (10 / 100);
		}
		else if (days >= 10 && days <= 15)
		{
			did[i] = basic[i] * (15 / 100);
		}
		else if (days >= 5 && days <= 10)
		{
			did[i] = basic[i] * (20 / 100);
		}
		else {
			did[i] = basic[i];
		}

		salary[i] = basic[i] + allow[i];
		red[i] = PF[i] + tax[i];
		cout << "Gross Reduction:" << red[i] << endl;;
		gross[i] = (salary[i] - red[i]) - did[i];
		cout << "Gross Pay:" << gross[i] << endl;

		cout << "-------------------------------------------------" << endl;
	}

}