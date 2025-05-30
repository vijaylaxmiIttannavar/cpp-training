#include<iostream>
using namespace std;

template<class T1, class T2>
class box
{
private:
	T1 data1;
	T2 data2;

public:
	box(T1 v1, T2 v2):data1(v1), data2(v2){}
	void print()
	{
		cout << data1 << ",  " << data2 << endl;
	}
};

int main()
{
	box<int, float> intbox(10, 12.3);
	box<string, float> stringbox("abc", 12.3);

	intbox.print();
	stringbox.print();

}