#include<iostream>
#include "add1.h"
using namespace std;

int main()
{
	int n1, n2;
	int ret = 0;
	cin >> n1 >> n2;
	ret = add(n1, n2);
	cout << ret;

}