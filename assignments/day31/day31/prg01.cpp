#include<iostream>
#include<iomanip>
using namespace std;

class Student
{
protected:
	int rollNo;
	string name;
	int age;
public:
	Student()
	{
		this->rollNo = rollNo;
		this->name = name;
		this->age = age;		
	}
	void setdata()
	{
		cout << "Enter Roll No: ";cin >> rollNo;
		cout << "Enter Name: ";cin >> name;
		cout << "Enter Age: ";cin >> age;
	}
	void display()
	{
		cout << "Student Info:" << endl;
		cout << "Roll No: " <<rollNo<< endl;
		cout << "Name: " <<name<< endl;
		cout << "Age: " <<age<< endl;
	}
};

class Marks:public Student
{
protected:
	int m1;
	int m2;
	int m3;
	float total;
	float avarage;
public:
	Marks()
	{
		this->m1 = m1;
		this->m2 = m2;
		this->m3 = m3;
		this->total = total;
		this->avarage = avarage;
	}
	void setm()   //(float m1, float m2, float m3)
	{
		cout << "Enter Marks: ";cin >> m1 >> m2 >> m3;
	}
	int calculate()
	{
		 total = m1 + m2 + m3; 
		 avarage = total / 3;
		 return 0;
	}
	void disp()
	{
		cout << "Full Result:" << endl;
		cout << "Total Marks: " <<total<< endl;
		cout << "Average Marks: "<< fixed<< setprecision(2) << avarage << endl;
	}
};

int main()
{
	Student s;
	Marks m;
	m.setdata();	
	m.setm();
	m.calculate();
	m.display();
	m.disp();

	return 0;
}

/*
* Enter Roll No: 101
Enter Name: Alice
Enter Age: 20
Enter Marks: 89 76 91
* Total Marks: 256
Average Marks: 85.33
*/