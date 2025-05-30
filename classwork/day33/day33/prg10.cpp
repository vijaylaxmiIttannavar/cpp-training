#include<iostream>
using namespace std;

template<class T>
class box
{
private:
	T data1;
	T data2;
	T add;
	T sub;
	T mul;
	T div;
public:
	box(T v1, T v2) :data1(v1), data2(v2)
	{
		 add = 0;
		 sub = 0;
		 div = 0;
		 mul = 0;
	}
	void calc()
	{
		add =data1 + data2;
		sub = data1 - data2;
		mul = data1 * data2;
		div = data1 / data2;
	}
	void print()
	{
		cout << "add : " << add << endl;
		cout << "sub : " << sub << endl;
		cout << "mul : " << mul << endl;
		cout << "div : " << div << endl;
	}
};

int main()
{
	float a, b;
	cin >> a >> b;
	try 
	{
		if (b != 0)
		{

			box<float> bx(a, b);
			bx.calc();
			bx.print();
			throw b;
		}
	}
	catch (int x)
	{
		cout << "not allowed" <<x << endl;
	}

	
}