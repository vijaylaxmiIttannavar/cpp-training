#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student
{
	int id;
	string name;
public:
	student(int i, string n) :id(i), name(n) {}

	void disp()
	{
		cout << "id: " << id << endl;
		cout << "name: " << name << endl;
	}
};

int main()
{
	student s1 = { 11, "vij" };
	student s2 = { 21, "raj" };
	student s3 = { 31, "bim" };

	vector<student >emp;
	emp.push_back(s1);
	emp.push_back(s2);
	emp.push_back(s3);

	for (auto e : emp)
		e.disp();

}