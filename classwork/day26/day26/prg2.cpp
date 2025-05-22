#include<iostream>
#include<cstring>
using namespace std;

class student
{
protected:
	int rollno;
	char name[20];
public:
	
	void setn(char* s)
	{	
		strcpy(name, s);
	}
	void setr(int r)
	{
		rollno = r;
	}
	char* getn()
	{
		return name;
	}
	int getr()
	{
		return rollno;
	}

	void disp()
	{
		cout << "hello all " << endl;
		cout << "name : " << name << endl;
		cout << "rollno :" << rollno << endl;
	}
};

int main()
{
	char n[] = "abc";
	char n2[] = "xyz";
	int r = 101;
	student s1;
	cout << sizeof(s1) << endl;
	s1.setn(n);
	s1.setr(r);
	s1.disp();
	
	cout << s1.getn() << "\t" << s1.getr() << endl;
	strcat(n2, s1.getn());
	cout << n2 << endl;
	
	return 0;
}