//print number in start to end range
#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int i = 0;
	for (i = n1;i <= n2;i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
	}
	return 0;
}