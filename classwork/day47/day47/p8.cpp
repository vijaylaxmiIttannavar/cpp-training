#include<iostream>
#include<memory>

using namespace std;

class rect
{
	int l;
	int b;
public:
	rect(int l, int b)
	{
		this->l = l;
		this->b = b;
	}
	int area()
	{
		return l * b;
	}
};

int main()
{
	shared_ptr<rect>r1(new rect(10, 20));
	shared_ptr<rect>r2;

	r2 = r1;	              
	cout << r1->area();
	cout << r2->area();    //will get differenr pointer

	cout << r1.use_count();    //shared ptr depends on count
}