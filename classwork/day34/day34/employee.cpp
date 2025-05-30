#include <iostream>  
#include<cstring>
#include <fstream>
using namespace std;

class Employee //do private this and try
{
protected:
	//char e_name[20];
	int e_id;
	int e_sal;
	//char e_dept[20];

public:
	Employee( int id, int s) :  e_id(id), e_sal(s) 
	{ //strcpy(e_name, name);
	//strcpy(e_dept, dept);
	}

	void dispEmp()
	{
	//	cout << "name: " << e_name << endl;
		cout << "ID: " << e_id << endl;
		//cout << "Dept: " << e_dept << endl;
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
	EmpFin(int id, int s, int pt, int pf, int vp, int nday) :
		Employee( id, s ),
		e_pt(pt), e_pf(pf), e_vp(vp), e_days(nday) {
		
	}

	void dispEmpFin()
	{
		cout << "=======collection of EMP details=========" << endl;
		dispEmp();
		cout << "P Tax: " << e_pt << endl;
		cout << "PF: " << e_pf << endl;
		cout << "VP: " << e_vp << endl;
		cout << "No Days" << e_days << endl;
		int gs = (e_sal - e_pt - e_pf) / 30;
		gs = gs * e_days;
		cout << "Gross Sal: " << gs << endl;
	}
};

int main()
{
	fstream fIO;
	EmpFin e(39, 26000, 200, 2600, 100000, 30);
	//EmpFin e1("laxmi", 293956, 26000, "AM", 200, 2600, 100000, 31);
	
	//e1.dispEmpFin();

	fIO.open("emp1.txt", ios::in|ios::out| ios::binary);

	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}

	fIO.write((char*)&e, sizeof(e));
	fIO.close();

	//fIO.read((char*)&e, sizeof(e));
	//cout << e1.id << "\t" << e1.name << endl;
	//e.dispEmpFin();


	
	return 0;
}