#include<iostream>
#include<cstring>
using namespace std;

typedef struct persnal
{
	char adr;
	char gender;
	int phno;
}PER;

struct finacial
{
	int salary;
	int w_days;
	int leav;
};

typedef struct employee
{
	int id;
	char name[20];
	char desg[20];
    PER p;
	finacial p;
}EMP;

int getinputs(EMP*);       //void getinput(EMP &)
int monthly_leavs(EMP*);
int level(EMP*);
int salary_calc(EMP*);
void display(EMP);

int main()
{
	EMP e;
}

int getinputs(EMP* e)
{
	cout << "enter details : " << endl;
	cout << "id - ";cin >> e->id;
	cout << "name - ";cin >> e->name;
	if(v_name)
	cout << "salary - ";cin >> e->p.salary;

}

int monthly_leavs(EMP* e)
{

}