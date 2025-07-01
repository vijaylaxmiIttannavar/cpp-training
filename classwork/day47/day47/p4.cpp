#include<iostream>
using namespace std;

int main()
{
	auto circle = [](int r) {return 3.142*r*r;};
	auto squre = [](int l) {return l*l;};
	auto rect = [](int a, int b) {return a * b;};
	

	cout << "circle: "<<circle(10) << endl;
	cout << "sq: "<< squre(40) << endl;
	cout << "rect: " << rect(10, 20) << endl;
}