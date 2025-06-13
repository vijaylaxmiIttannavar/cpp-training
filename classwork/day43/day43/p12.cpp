/*Given an array, print the Next Greater Element(NGE) for every element.
The Next greater Element for an element x is the first greater element on the right side of x in array.
Elements for which no greater element exist, consider next greater element as - 1.
For the input array[4, 5, 2, 25, 7, 8}, the next greater elements for each element are as follows.

Element-- > NGE
output :
4 -- > 5
5 -- > 25
2 -- > 25
25 -- > -1
7 -- > 8
8 -- > -1  */

#include<iostream>
#include<vector>
#define N 1024
using namespace std;

int main()
{
	//vector<int>v = { 4, 5, 2, 25, 7, 8 };
	//vector<int>v;
	int s ;
	int v[N];
	cin >> s;
	for (int i=0;i<s;i++)
	{
		cin >> v[i];
			
	}	
	cout << "Element-- > NGE " << endl;

	for (int i=0 , j; i<s;i++)
	{   

		cout << v[i] << "-> ";
		for ( j = i; j < s;j++)
		{
			if (v[i] < v[j])
			{
				cout << v[j] << endl;
				break;
			}		
		}
		if( j == s )
		cout << "-1" << endl;
	}

}