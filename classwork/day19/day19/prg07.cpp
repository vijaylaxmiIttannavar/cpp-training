#include<iostream>
using namespace std;

int get(int*, int);
int* alloc(int*, int);
int sort(int*, int);
void swap(int&, int&);
void disp(int*, int);

int main()
{
	int* ptr=nullptr;
	int n=5;
	//cin >> n;
	ptr = alloc(ptr, n);
	get(ptr, n);
	sort(ptr, n);
	disp(ptr, n);
}

int* alloc(int* p, int n)
{
	p = (int*)malloc(sizeof(int) * n);
	return p;
}

int get(int* p, int n)
{
	for (int i = 0;i < n;i++,p++)
	{
		cin >> *p;
	}
	return 0;
}

int sort(int* p, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (p[i] < p[j])
				swap(p[i], p[j]);
		}
	}
	return 0;
}

void swap(int& x, int &y)
{
	int t;
	t = x;
	x = y;
	y = t;	
}

void disp(int* p, int n)
{
	int i = 0;
	while (i < n)
	{
		cout << *p++ << "\t";
		i++;
	}
}

