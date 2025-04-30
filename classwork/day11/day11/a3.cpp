/**#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int i;
	cout << "enter arr " << endl;
	for (i = 0;i < 10;i++)
	{
		cin>> arr[i];
	}
	cout << "arr " << endl;
	for (i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	int v;
	cout << "enter value - ";
	scanf("%d", &v);

	for (i = 0;i < 10;i++)
	{
		if (v == arr[i])
		{
			cout << "present" << endl;
			break;
		}		
	}
	if (i == 10)
	{
	
		cout << "not found" << endl;

	}
}*/

/* problem - 3)armstrong problem */

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = 0;
	int num = 0;
	int d = 0, sum = 0;

	temp = n;
	while (temp != 0)
	{
		temp /= 10;
		num++;
	}
	temp = n;

	while (temp != 0)
	{
		d = temp % 10;
		sum = sum + pow(d, num);
		temp = temp / 10;
	}

	if (sum == n)

		cout << "Armstrong number" << endl;
	else
		cout << "not armstrong" << endl;
}
