#include<iostream>
#include<vector>
#include<iterator>
#include<string>
using namespace std;

class Employee
{
	int id;
	string name;
public:
	Employee() : id(0), name("") {}
	Employee (int id, string name) : id(id), name(name) {}
	Employee(const Employee& others)
	{
		this->id = others.id;
		this->name = others.name;
	}
	void seti()
	{
		this->id = id;
	}
	void setname()
	{
		this->name = name;
	}
	int geti()
	{
		return id;
	}
	string getname()
	{
		return name;
	}
	void setvalue()
	{
		cin >> id >> name;
	}

	void disp()
	{
		cout << id << " " << name<<endl;
	}
	
    friend istream &operator >> (istream &is, Employee &e)
	{	
		is >> e.id >> e.name;
		return is;
	}
	friend ostream& operator <<(ostream& os, Employee& e)
	{
		os << "ID: " << e.id << "\tName: " << e.name << endl;
		return os;
	}

};


int main()
{
	int id;
	string name;
	                           //read untill EOF (ctrl+z) cintake values
	istream_iterator<Employee>inIt(std::cin);   //begin input stream
	istream_iterator<Employee>endIt;            //end of iterator stream
	vector<Employee>emp;
	

	while (inIt != endIt)
	{
		emp.push_back(*inIt);
		++inIt;
	}

	for (auto e : emp)
		cout << e;

	return 0;
}