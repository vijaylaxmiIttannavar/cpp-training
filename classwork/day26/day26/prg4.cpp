#include<iostream>
#include<cstring>
using namespace std;

class student
{
private:
	int rollno;
	char name[20];
	char branch[20];
	char gender;
	int sem;
	int mrk1, mrk2, mrk3;
	int avg;
public:
	void setRollno(int );	
	int setRollno();
	void setName(char* );
	char* getName();	
	void setBrh(char* );	
	char* getBrh();	
	void setGnd(char );	
	char getGnd();	
	void setSem(int );	
	int setSem();	
	void setMark(int, int, int);	
	int getMark();	
	void disp();
private:
	float fun(int, int, int);
};

void student:: setRollno(int r)
{
	rollno = r;
}
int student::setRollno()
{
	return rollno;
}
void student:: setName(char* n)
{
	strcpy(name, n);
}
char* student:: getName()
{
	return name;
}
void student::setBrh(char* b)
{
	strcpy(branch, b);
}
char* student:: getBrh()
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
void  student::setMark(int m1, int m2, int m3)
{
	mrk1 = m1;
	mrk2 = m2;
	mrk3 = m3;
}
int  student::getMark()
{
	return mrk1;
	return mrk2;
	return mrk3;
	return avg;
}

void  student::disp()
{
	cout << "rolno : " << rollno << endl;
	cout << "name : " << name << endl;
	cout << "branch : " << branch << endl;
	cout << "gender : " << gender << endl;
	cout << "sem : " << sem << endl;
	cout << "marks : " << mrk1 << ", " << mrk2 << ", " << mrk3 << endl;
	cout << "avg : " << fun(mrk1, mrk2, mrk3) << endl;
}

float  student::fun(int m1, int m2, int m3)
{
	int ret;
	ret = (m1 + m2 + m3) / 3;
	return ret;
}


int main()
{
	int rn = 101;
	char nm[] = "vijaya";
	char br[] = "ece";
	char gn = 'f';
	int se = 8;
	int mr1 = 90, mr2 = 85, mr3 = 95, ret = 0;
	student s1;
	s1.setRollno(rn);
	s1.setName(nm);
	s1.setBrh(br);
	s1.setGnd(gn);
	s1.setSem(se);
	s1.setMark(mr1, mr2, mr3);

	s1.disp();

}