#include<iostream>
using namespace std;

typedef struct shape
{
	int len;
	int wid;
}SHAPE;

int main()
{
	SHAPE s1;
	s1.len = 10;
	s1.wid = 30;

	SHAPE s2;
	s2.len = 20;
	s2.wid = 40;

	SHAPE s3;
	s3.len = s1.len + s2.len;
	s3.wid = s1.wid + s2.wid;

	cout << s3.len << "\t" << s3.wid << endl;

	SHAPE s4=s3;                  //we can copy val;
	                         //s4.len = s3.len & s4.wid= s3.wid;    both are ok
	cout << s4.len << "\t" << s4.wid << endl;
}