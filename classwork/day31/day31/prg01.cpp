#include<iostream>
using namespace std;

class Test
{
private:
	int v;
public:
	Test()
	{
		v = 0;
	}
	Test(int v)
	{
		this->v = v;
	} 
	void setv(int val)
	{
		this->v = v;
	}
	int getv()
	{
		return this->v;
	}
};

int main()
{
	Test t;
	//cout << "v= " << t.getv();
	t.setv(10);
	cout << " v= " << t.getv();
}