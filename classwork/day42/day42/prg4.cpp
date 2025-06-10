#include<iostream>
#include<vector>
#include<string>
using namespace std;

class employee
{
	int id;
	string name;
public:
	employee(int id, string name) : id(id), name(name) {}
	void disp()
	{
		cout << "id : " << id << "name : " << name << endl;
	}
};

int main()
{
	vector <int> v = { 1, 2, 3 };
	vector<int>::iterator it;     //iterators are ectented of class
	for (it = v.begin();it != v.end();it++)
	{
		cout << *it << endl;
	}
	cout << endl;
////////////////////////////////////////////////////////////////////////////
	vector<employee> vemp;
	vemp.emplace_back(101, "vij");
	vemp.emplace_back(102, "raj");
	vemp.emplace_back(103, "mayu");
	vemp.emplace_back(104, "pammu");
	vector<employee> ::iterator vit;
	int i = 0;
	for (vit = vemp.begin();vit != vemp.end();i++, vit++)
	{
		vit->disp();          //both are okay
		(*vit).disp();
	}
}