#include<iostream>
using namespace std;

int main()
{
	int arr[3][5] = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15} };

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			cout << "adr : " << (unsigned long int) & arr[i][j] << " " << arr[i][j] << endl;
		}
	}

	int* ptr = nullptr;
	ptr = &arr[0][0];
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;
	ptr++;
	cout << *ptr << endl;

	int** ptr1 = &(&arr[])[];

}
/*
*  BA + IV*sizeof(dta) -- 1d array
*  BA + R+c*sizeof(dta)
*  8568 + 0+0*4 => 8568 => 1
*  8568 + 0+1*4 => 8572 =>2
*  8568 + 0+2*4 => 8576 =>3
*  8568 + 0+3*4 => 8580 =>4
*  8568 + 0+5*4 => 8584 =>5
*  
*  BA + c*sizeof(dt) + (c*sizeof(dt))
* ===BA + r*(noofc * sizeof(dt)) + (c * sizeof(dt))
*  8568 + 0*(5*4)+0*4 => 8568 => 1 
*  8568 + 0*(5*4)+1*4 => 8572 => 2 
*  8568 + 0*(5*4)+2*4 => 8576 => 3 
*  8568 + 0*(5*4)+3*4 => 8580 => 4 
*  8568 + 0*(5*4)+4*4 => 8584 => 5 
*/