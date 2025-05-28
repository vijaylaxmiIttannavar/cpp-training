#include<iostream>
using namespace std;

class Employee 
{
public:
	int empId;
	string name;
	Employee()
	{
		this->empId;
		this->name = name;
	}
	void setdata()
	{
		cout << "EMpId: ";cin >> empId;
		cout << "Name: ";cin>>name;
	}
};

class Developer : virtual public Employee
{
public:
	int Coding_Hours;
	int	Team_Size;
public:
	Developer()
	{
		this->Coding_Hours = Coding_Hours;
		this->Team_Size = Team_Size;

	}
	void seth()
	{
		cout << "Coding Hours: ";cin >> Coding_Hours;
		cout << "Team Size: ";cin >> Team_Size;
	}
};

class Manager :virtual public Employee
{
public:
	int Coding_Hours;
	int	Team_Size;
public:
	Manager()
	{
		this->Coding_Hours=Coding_Hours ;
		this->Team_Size = Team_Size;

	}
	void seth()
	{
		cout << "Coding Hours: ";cin >> Coding_Hours;
		cout << "Team Size: ";cin >> Team_Size;
	}
};

class TechLead : public Developer,  public Manager
{
protected:
	int ph;
	int pt;
public:
	TechLead()
	{
		this->ph = ph;
		this-> pt = pt;
	}
	int calculateSalary()
	{
		ph = 500;
		pt = 5000;

		cout << "Salary based on coding : " << ph*Coding_Hours << endl;
		cout << "Salary based on coding + team : " << pt * Team_Size << endl;
	}
	//Salary based on coding : ?60000
	//	Salary based on coding + team : ?85000

};

int main()
{
	return 0;
}

