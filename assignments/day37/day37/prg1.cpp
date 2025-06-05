/* 
i/p - 1234567897653322
Sample Output - 13
Explanation -Here, the maximum definite value will be of 7 which is equal to
14 and the minimum will be of 1 which is 1.
So the difference is 13.
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	//string n = "1234567897653322";
	int num = 123455;
	int c1 = 0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
	//int s1, s2, s3, s4, s5, s6, s7, s8, s9 = 0;
	//vector<int>arr;
	int arr[] = { 0 };
	for (int i = 0;i <= 9;i++)
	{
		while (num > 0)
		{
			int rem = num % 10;
			
			if (rem == 1)
			{
				c1++;
				arr[i] = rem * c1;
				cout << "t="<<arr[i];
			}
			else if (rem == 2)
			{
				c2++;
				arr[i] = rem * c2;
			}
			else if (rem == 3)
			{
				c3++;
				arr[i] = rem * c3;
			}
			else if (rem == 4)
			{
				c4++;
				arr[i] = rem * c4;
			}
			else if (rem == 5)
			{
				c5++;
				arr[i] = rem * c5;
			}
			else if (rem == 6)
			{
				c6++;
				arr[i] = rem * c6;
			}
			else if (rem == 7)
			{
				c7++;
				arr[i] = rem * c7;
			}
			else if (rem == 8)
			{
				c8++;
				arr[i] = rem * c8;
			}
			else if (rem == 9)
			{
				c9++;
				arr[i] = rem * c9;
			}
		}
		num = num / 10;
	}
	
	int max = arr[0];
	int min = arr[0];
	for (int i = 0;i < 10;i++)
	{
			if (max > arr[i])
				max = arr[i];
			if (min > arr[i])
				min = arr[i];
	}
	//cout << max << ", " << min << endl;
	cout << "god no - " << max - min << endl;
}