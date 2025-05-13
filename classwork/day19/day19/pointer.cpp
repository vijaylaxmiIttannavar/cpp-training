#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.5;
	
	//void* ptr;

	int* ptr = nullptr;
	printf("%u, %d\n", &a, a);
	printf("%u, %c\n", &ch, ch);
	printf("%u, %f\n", &f, f);
	printf("%u, %u\n", &ptr, ptr);
    
	a = 10;
	ptr = &a;
	printf("%u %d\n", ptr, *ptr);

	int b = 30;
	ptr = &b;
	printf("%u %d\n", ptr, *ptr);

	*ptr = 50;
	printf("%u %d\n", &b, b);

	void* ptr1= nullptr;
	ptr1 = &b;
	printf("%u = %d\n", ptr1, *(int*)ptr1);

	/*int* p = nullptr;
	printf("%d", *p);*/      //segmentation fault

	int p = 10;
	int q = 20;
	int r = 30;

	int*pm = &p;
	cout << *pm << endl;

	*pm = 101;
	cout << *pm << endl;
	cout << p << endl;

	pm = &q;
	cout << *pm << endl;

    pm = &r;
	cout << *pm << endl;


}