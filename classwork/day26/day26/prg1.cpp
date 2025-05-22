#include<iostream>
#include<cstring>
using namespace std;

class student
{
public:
	int rollno;
	string name;

};

int main()
{
	student s;
	cout<<sizeof(s)<<endl;
	s.name = "vij";
	s.rollno = 52;
	cout << s.name << " " << s.rollno << endl;
	return 0;
}