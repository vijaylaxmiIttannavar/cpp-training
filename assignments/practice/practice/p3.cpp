#include<iostream>
using namespace std;
int main()
{ 
	int n = 5;
	for (int i = 1; ; i += 2)
	{  // Logical issue here
		if(i<=n)
		cout << "Step " << i << endl;
	}
}