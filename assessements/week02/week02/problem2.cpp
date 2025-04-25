/* problem - 2)digit frequency */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int d = 0, sum = 0, a0 = 0, a1 = 0, a2 = 0, a3 = 0;
	int a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;

	while (n > 0)
	{
		d = n % 10;
		if (d == 0)
			a0++;
		else if (d == 1)
			a1++;
		else if (d == 2)
			a2++;
	    else if (d == 3)
			a3++;
		else if (d == 4)
			a4++;
		else if (d == 5)
			a5++;
		else if (d == 6)
			a6++;
		else if (d == 7)
			a7++;
		else if (d == 8)
			a8++;
		else if (d == 9)
			a9++;
		n = n / 10;

	}

	cout << "Digit frequencies : " << endl;

	cout << "0: " << a0 << endl;
	cout << "1: " << a1 << endl;
	cout << "2: " << a2 << endl;
	cout << "3: " << a3 << endl;
	cout << "4: " << a4 << endl;
	cout << "5: " << a5 << endl;
	cout << "6: " << a6 << endl;
	cout << "7: " << a7 << endl;
	cout << "8: " << a8 << endl;
	cout << "9: " << a9 << endl;


}