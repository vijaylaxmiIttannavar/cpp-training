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
	unique_ptr<rect>r1(new rect(10, 20));
	unique_ptr<rect>r2;

	cout << r1->area();
	r2 = move(r1);	       //from move we points diffrent ptr to same obj- move sematic
	cout << r2->area();
	//cout << r1->area();   //here will get segment fault 
}