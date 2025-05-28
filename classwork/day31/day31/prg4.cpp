#include<iostream>
using namespace std;

class Veh
{
protected:
	int wheels, cap;
public:
	void setval(int wheels, int cap) {
		this->wheels =wheels;
		this->cap = cap;
	}
};

class Car : public Veh
{
protected:
	int disel;
public:
	void setv()
	{
		cout << "enter wheels, cap, disel" << endl;
		cin >> wheels >> cap>>disel;
	}
	void disp()
	{
	   
		cout << "car has this much wheels and cap & disel : " << wheels << ", " << cap<< ", " << disel << endl;
	}
};

int main()
{
	Car obj;
	obj.setv();
	obj.disp();
	return 0;
}