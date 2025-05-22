#include<iostream>

using namespace std;

typedef struct employeee
{
	int id;
	string name;
	struct adress
	{
		int hno;
	}ADR;
}EMP;

int main()
{
	EMP e;
	e.id = 101;
	e.name = "vij";
	e.ADR.hno = 1234;
	cout << e.id << " ," << e.name << " , " << e.ADR.hno << ", " << endl;
}