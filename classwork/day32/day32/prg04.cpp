#include <iostream>   //multilevel .......a to b to c, there is no a to c
using namespace std;

class Person {
protected:
	string name;
	char g;
	int age;
	int phno;
public:
	Person(string n, char g, int a, int pno) : name(n), g(g), age(a), phno(pno) {}

	void dispPerson()
	{
		cout << "Name: " << name << endl;
		cout << "Gender: " << g << endl;
		cout << "Age: " << age << endl;
		cout << "Phno: " << phno << endl;
	}
};

class Employee :private Person   //do private this and try
{
protected:
	int e_id;
	int e_sal;
	string e_dept;
public:
	Employee(string n, char g, int a, int pno, int id, int s, string dept) :
		Person(n, g, a, pno),
		e_id(id), e_sal(s), e_dept(dept) {}

	void dispEmp()
	{
		dispPerson();
		cout << "ID: " << e_id << endl;
		cout << "Dept: " << e_dept << endl;
		cout << "Salaray: " << e_sal << endl;
	}
};

class EmpFin : public Employee
{
private:
	int e_pt;
	int e_pf;
	int e_vp;
	int e_days;
public:
	EmpFin(string n, char g, int a, int pno, int id, int s, string dept, int pt, int pf, int vp, int nday) :
		Employee(n, g, a, pno, id, s, dept),
		e_pt(pt), e_pf(pf), e_vp(vp), e_days(nday) {}

	void dispEmpFin()
	{
		//dispPerson();
		dispEmp();
		cout << "P Tax: " << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "VP: " << e_vp << endl;
		cout << "No Days" << e_days << endl;
		int gs = (e_sal - e_pt - e_pf) / 30;
		gs = gs * e_days;
		cout << "Gross Sal: " << gs << endl;
		cout <<"===================="<<endl;
	}
};

int main()
{
	EmpFin e("Abhijt", 'm', 22, 7777, 293956, 26000, "AM", 200, 2600, 100000, 30);	
	EmpFin e1("Remin", 'm', 22, 7777, 293957, 26000, "AM", 200, 2600, 100000, 31);

	e.dispEmpFin();
	e1.dispEmpFin();
}