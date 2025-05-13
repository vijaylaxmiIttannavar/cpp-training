#include<iostream>
using namespace std;
int main()
{
	int a[3] = { 10, 20, 30 };
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;
	int* ptr = nullptr;

	ptr = a;                  //ptr = &a[0];    its equal to &*(a+0) so get a+0 so a
	cout << *ptr << endl;

	/*ptr = &a[1];
	cout << *ptr << endl; */
	ptr = ptr+1;               //both means same
	cout << *ptr << endl;

	//free(ptr);

	ptr = ptr+1;    //ptr=a+2;
	cout << *ptr << endl;

	ptr = ptr - 1;    
	cout << *ptr << endl;

	ptr++;    //ptr=a+2;
	cout << *ptr << endl;
}