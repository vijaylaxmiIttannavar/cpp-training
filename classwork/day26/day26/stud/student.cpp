#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;
int ret;
void student::setRollno(int r)
{
	rollno = r;
}
int student::setRollno()
{
	return rollno;
}
void student::setName(const char* n)
{
	strcpy(name, n);
}
char* student::getName()
{
	return name;
}
void student::setBrh(char* b)
{
	strcpy(branch, b);
}
char* student::getBrh()
{
	return branch;
}
void  student::setGnd(char g)
{
	gender = g;
}
char  student::getGnd()
{
	return gender;
}
void  student::setSem(int s)
{
	sem = s;
}
int  student::setSem()
{
	return sem;
}
void  student::setMark(float m[])
{
	for (int i = 0;i < 3;i++)
		mark[i] = m[i];
}


void  student::disp()
{
	cout << rollno << "\t";
	cout << name << "\t";
	cout << branch << "\t";
	cout << gender << "\t";
	cout << sem << "\t";
	for (int i = 0;i < 4;i++) {
		cout << mark[i] << "\t";
	}
	cout << fun();
	//cout << "grade : " << grade()<< endl;
}

float  student::fun()
{
	float avg = 0.0;
	for (int i = 0;i < 3;i++)
	{
		avg = avg + mark[i];
	}
	return avg / 3;
	

	//grade(ret);
}

float student::grade()
{
	return fun();

}

/*
char student::grade(int ret)
{
	char g = 0;
	if (ret >= 40 && ret <= 70)
		cout << 'C' << endl;
	else if (ret > 70 && ret <= 85)
		cout << 'B' << endl;
	else if (ret > 85 && ret <= 100)
		cout << 'A' << endl;
	else
		return 0;
}
*/


