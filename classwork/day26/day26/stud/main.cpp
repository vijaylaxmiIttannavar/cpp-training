
#include<iostream>
#include<cstring>
#include"student.h"
using namespace std; 

void disptable()
{
	cout << "rollno\tname\tbranch\tgender\tsem\tm1\tm2\tm3\tavg\tgrade" << endl;
}

int main()
{
	string p;
	int rNo;
	float mark[3];
	char ge=0;
	char sem[10];
	char br[10] = {'\0'};
	student* s1 = new student[3];

	for (int i = 0;i < 3;i++)
	{
		cout << "Enter details of " << (i + 1) << " student" << endl;
		cout << "Roll No: ";cin >> rNo;
		cout << "Name: ";cin >> p;
		cout << "brch: ";cin >> br;
		cout << "gender: ";cin >> ge;
		cout << "sem: ";cin >> sem;
		cout << "Enter 3 subs marks" << endl;
		for (int j = 0;j < 3;j++) {
			cout << "M[" << (j + 1) << "]: ";cin >> mark[j];
		}
		s1[i].setName(p.c_str());
		s1[i].setRollno(rNo);
		s1[i].setGnd(ge);
		s1[i].setBrh(br);
		s1[i].setSem();
		s1[i].setMark(mark);
		

	}

	disptable();
	for (int i = 0;i < 3;i++)
	{
		s1[i].disp();
		float grade =s1[i].grade();
		cout << "\t";
		if ((grade >= 85) && (grade <= 100))
			cout << " A" << endl;
		else if ((grade >= 75) && (grade < 85))
			cout << " B" << endl;
		else if ((grade >= 45) && (grade < 75))
			cout << " C" << endl;
		else if ((grade >= 0) && (grade < 45))
			cout << " Fail" << endl;
		else
			cout << "Out of range" << endl;
	}
	return 0;

}