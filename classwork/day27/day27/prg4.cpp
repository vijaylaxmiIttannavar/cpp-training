#include<iostream>
using namespace std;

class T
{
private:
	static int val;
public:
	T()
	{
		val++;
	}
	void disp()
	{
		
		cout << "value of val : " <<val<< endl;
	}
};

int T::val=10;   //to acess the private static

int main()
{
	T t1;
	t1.disp();

	T t2;
	t2.disp();
	t1.disp();
}