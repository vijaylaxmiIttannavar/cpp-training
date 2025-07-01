#include<iostream>

using namespace std;

int main()
{
	auto fun = [](const string name) {cout << "name : " << name; return " hi"; };
	cout << fun("vij") << endl;
}