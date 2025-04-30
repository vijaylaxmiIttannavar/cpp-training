#include<iostream>
using namespace std;
int main()
{
	int n=7;
	//cin >> n;
	int arr[7] = { 1, 4, 0, 0, 3, 10, 5};
	int sum;
	cin >> sum;
	int i;
	int count = 0;
		int j ;
	for (i = 0;i < n;i++)
	{
		for (j = i;j < n;j++)
		{
		if (arr[i] + arr[j] == sum)
		{
			count = 1;
			cout << "sum found in index " << i << "and" << j << endl;
			break;
		}
	}
	}
	if (count == 0)
	{
		cout << "not found" << endl;
	}
	
   
}