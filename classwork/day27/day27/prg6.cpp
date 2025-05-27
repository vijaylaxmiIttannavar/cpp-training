#include<iostream>
using namespace std;
#define M 1024

class Array
{	
private:
	int size;
	int arr[M];
public:
	Array(int, int[]);

	void biggest_array();
	void asscend_sort();
	void descend_sort();
};


Array::Array(int n, int ar[])
{
	size = n;
	for (int i = 0;i < size;i++)
	{
		arr[i] = ar[i];
	} 
}

void Array:: biggest_array()
{
	int l = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (l < arr[i])
		{
			l = arr[i];
		}
	}
	cout << "big : " << l << endl;
}

void Array::asscend_sort()
{
	
	for (int i = 0;i < size;i++)
	{
		for (int j = i;j < size;j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i] <<" ";
	}
}

void Array::descend_sort()
{
	for (int i = 0;i < size;i++)
	{
		for (int j = i;j <size;j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i] << " ";
	}
}


int main()
{
	int n = 5;
	int* arl = new int[5];
	for (int i = 0;i < 5;i++)
	{
		cin >> arl[i];
	}
	Array r(n, arl);
	r.biggest_array();
	r.asscend_sort();
	cout << endl;
	r.descend_sort();
}