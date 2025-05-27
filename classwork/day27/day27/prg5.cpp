#include<iostream>
using namespace std;

/**class T
{
private:


}; */

int main()
{
	static int* a = new int(10);
	delete a;
	*a = 101;

	cout << a;
}