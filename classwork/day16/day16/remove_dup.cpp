#include<iostream>
#define M 1024
using namespace std;
int main()                             //storing in that single array
{
	int n;
	cin >> n;
	int arr[M];
	int i, j, k = 0, c=0;
	for (i = 0;i < n;i++)
		cin >> arr[i];	
    for (i = 0;i < n;i++)
	{
		c = 0;
		for (j = i;j < n;j++)
		{
			if (arr[i]== arr[j])
				c++;			
		}		
		if (c == 1)
			arr[k++] = arr[i];
	}

	for (i = 0;i < k;i++)
		cout << arr[i] << endl;
}

/*
#include<iostream>              //storing in new array
#define M 1024
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[M];
	int i, j, k = 0, c=0;
	for (i = 0;i < n;i++)
		cin >> arr[i];
	int new_arr1[M];
	
    for (i = 0;i < n;i++)
	{
		c = 0;
		for (j = i;j < n;j++)
		{
			if (arr[i]== arr[j])
				c++;			
		}		
		if (c == 1)
			new_arr1[k++] = arr[i];
	}

	for (i = 0;i < k;i++)
		cout << new_arr1[i] << endl;
}*/


/**                                     //another  method
for (i = 0;i < n;i++)
{
	for (j = i;j < n;j++)
	{
		if (arr[i] == arr[j])
		{
			for (k = j;k < n;k++)
				arr[k] = arr[k + 1];
			n--;
		}
		else
			j++;
	 }
}   
**/




