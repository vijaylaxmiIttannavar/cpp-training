#include<iostream>
#define MAX 10
using namespace std;
int main()
{
	int taste = 0;
	int empty = MAX;
	do
	{
		cout << " have bite of food" << endl;
		empty--;
		cout << " how is taste of food (0/1) = " ;
		cin >> taste;
	} while ((taste > 0) && (empty > 0));

	if (empty == 0)
	{
		cout << "person stop eating as the plate empty" << endl;
		cout << " and food was awesom" << endl;
	}

	if (taste == 0)
	{
		cout << "taste was not good enough after having " << (MAX - empty);
		cout << "bite of food" << endl;
	}
}