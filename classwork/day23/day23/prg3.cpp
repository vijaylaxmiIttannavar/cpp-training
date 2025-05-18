#include<iostream>
#include<cstdlib>
using namespace std;

int* fun(int a)
{
   static int s = 0; //use static to avoid dangling
	s += a;
	cout << "ba of s: "<<(unsigned long int) & s << endl;
	return &s ;

}

int main()
{
	int* ptr = fun(101); //dangling ptr->pointer points to freed loc

	cout << *ptr << " adr of s: "<<(unsigned long int)ptr << endl;
	*ptr = 202;
	ptr = fun(303);
	cout << *ptr << endl;  //sum is 505 = 202 + 303

	return 0;
}