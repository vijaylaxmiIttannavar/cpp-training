#include<iostream>
using namespace std;

class Num
{
protected:
	int n1, n2;
public:
     void setn(int n1, int n2) {
		this->n1 = n1;
		this->n2 = n2;
	}
};

class Mul : public Num
{
protected:
	int p;
public:
	void setv()
	{
		cout << "enter n1, n2" << endl;
		cin >> n1 >> n2;
	}
	int multi()
	{
		p = n1 * n2;
		return p;
	}
};

int main()
{
	//Num n(1,4);
	Mul objM;
	objM.setv();
	cout << objM.multi();
	return 0;
}