#include<iostream>
using namespace std;

typedef struct emp
{
	int empid;	
	int empno;
	string empname;
	string empadr;
	char empgender;
}EMP;                   //use cap for qaulity

void disp(EMP);
int get_dtl(EMP);

int main()
{
	EMP e1;
	e1.empid = 101;
	e1.empname = "vijaylaxmi";
	e1.empadr = "bangalore";
	e1.empno = 80881;
	e1.empgender = 'F';

	cout << "size : " << sizeof(EMP) << ", " <<sizeof(e1) << endl;
	cout << endl;
	cout<<"id : "<<e1.empid << endl;
	cout<<"name : "<< e1.empname << endl;
	cout<<"adr : "<<e1.empadr << endl;
	cout<<"phno : "<<e1.empno << endl;
	cout<<"gdr : "<<e1.empgender << endl;
	cout << "**************" << endl;

	disp(e1);
	get_dtl(&e1);

	emp e[3];

	for(int i = 0;i < 3;i++)
	{
		get_dtl(&e[i]);
	}
	cout << "**************************" << endl;
	
	for (int i = 0;i < 3;i++)
	{
		disp(e[i]);
	}

}

void disp(EMP e)
{
	cout << "**************" << endl;
	cout << "id : " << e.empid << endl;
	cout << "name : " << e.empname << endl;
	cout << "adr : " << e.empadr << endl;
	cout << "phno : " << e.empno << endl;
	cout << "gdr : " << e.empgender << endl;
	cout << "**************" << endl;

}

int get_dtl(EMP *e)
{
	
		cout << "id : ";cin >> e->empid;
		cout << "name : ";cin >> e->empname;
		cout << "adr : "; cin >> e->empadr;
		cout << "phno : "; cin >> e->empno;
		cout << "gdr : "; cin >> e->empgender;
	
}
