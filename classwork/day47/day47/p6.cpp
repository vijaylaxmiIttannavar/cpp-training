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
	unique_ptr<rect>r(new rect(10, 20));
	cout << r->area();
}