#include<iostream>
#define M 1024
using namespace std;

int fun(int arr[], int n,  int target, int l, int r)
{
	static int c = 0;
	int mid;
	mid = l+ (r-l)/2;	
	bool flag = false;
	c++;
	    if(l>r)
			return false;     
		if (arr[mid] == target)
			return true;	
		else if (target < arr[mid])
			return fun(arr, n, target, l, mid-1);
		else 		
			return fun(arr, n, target, mid+1, r);	
}

int main()
{
	int n = 7;
	int arr[7] = { 3, 6, 7, 11, 32, 33, 53 };
	int target = 3;
	int res= fun(arr, n, target, 0, n-1);

	if (res)
		cout << "got " << endl;
	else
		cout << "not "<<endl;
}