#include<iostream>
using namespace std;

int main()
{
	auto add = [](int a, int b) {return a + b;};
	auto sub = [](int a, int b) {return a - b;};
	auto mul = [](int a, int b) {return a * b;};
	auto div = [](int a, int b) {return a / b;};

	cout <<"add: "<< add(10, 20) << endl;
	cout << "sub: "<< sub(40, 20) << endl;
	cout <<"mul: "<< mul(10, 20) << endl;
	cout <<"div: "<< div(100, 20) << endl;
}