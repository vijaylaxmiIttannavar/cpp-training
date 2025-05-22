#include<iostream>
using namespace std;
#define M 1024

class Array
{
private:
	int size;      //size of array
	int arr[M];    //array elements
public:
	Array(int, int[]);  //constroctor

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

void Array::biggest_array()
{
	int l = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (l < arr[i])
		{
			l = arr[i];
		}
	}
	cout << "biggest number : " << l << endl;
}

void Array::asscend_sort()
{
	cout << "asscending order : ";
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
		cout << arr[i] << " ";
	}
}

void Array::descend_sort()
{
	cout << "descending order : ";
	for (int i = 0;i < size;i++)
	{
		for (int j = i;j < size;j++)
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
	int n;
	cout << "enter size of array : ";
	cin >> n;
	cout << "enter array elements : ";
	int* arl = new int[n];
	for (int i = 0;i < n;i++)
	{
		cin >> arl[i];
	}
	Array r(n, arl);
	r.biggest_array();
	r.asscend_sort();
	cout << endl;
	r.descend_sort();
}