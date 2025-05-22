#pragma once
class student
{
private:
	int rollno;
	char name[20];
	char branch[20];
	char gender;
	int sem;
	float mark[3];
	int avg;
public:
	void setRollno(int);
	int setRollno();
	void setName(const char*);
	char* getName();
	void setBrh(char*);
	char* getBrh();
	void setGnd(char);
	char getGnd();
	void setSem(int);
	int setSem();
	void setMark(float[]);
	void disp();
    float grade();
private:
	float fun();
	//char grade();
};
