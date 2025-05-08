#include<iostream>
using namespace std;

int main()
{
	static int n = 1;

	if (n == 10)
		exit(0);
	
	cout << n++ << endl;
	main();
	return 0;
}