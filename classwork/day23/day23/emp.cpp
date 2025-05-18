#include<iostream>
using namespace std;

typedef struct empdtl
{
	int id;
	char name[20];
}EMP;

typedef struct period
{
	int id;
	int day;
}PRD;

typedef struct salary
{
	int id;
	int basic;
	int allow;
	int tax;
}SAL;

int getdtl(EMP *, PRD *, SAL);

void disp(EMP *, PRD *, SAL);

int calc(PRD *, SAL);

int getdtl(EMP *e, PRD *p, SAL *s)
{
	cin >> e->id;
	cin >> e->name;
	cin >> p->day;
	cin >> s->basic;
	cin >> s->allow;	
	return 0;
}

int calc(PRD *p , SAL *s)
{
	int g = basic + allow;
	int td = 22;
	int inh = 0;
	if (day >= 21 && day <= 22)
	{
		return inh = g;
	}
	else if(day >= 18 && day <= 20)
	{
		return inh =g- g*0.5;
	}
	else if (day >= 15 && day <= 17)
	{
		return inh = g - g * 0.10;
	}
}

int  tax(SAL s, PRD p)
{
	int tax=0.4;
	int T = g*t;
	return T;
}

void disp(SAL s, PRD p, EMP e)
{
	for (int i = 0;i < 3;i++)
	{
		cout << e.id[i] << "\t" << e.name[i] << "\t" << s.tax[i] << "\t" << s.inh[i]  << endl;
	}
}


int main()
{
	EMP e[3];
	PRD p;
	SAL s;
	for (int i = 0;i < 3;i++)
	{
		getdtl(&e[i]);
	}


}