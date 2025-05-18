#include<iostream>
#include<stdlib.h>
using namespace std;

struct book
{
	int isbin;
	char title[20];
	float price;
	char publicatin[20];
	char author[20];
};

int main()
{
	struct book b1;

	cout << sizeof(b1) << endl;

	struct book b2 = { 1001, "let us c++", 220.5, "pbp", "yeshwanth"};

	cout << "isbin :" << b2.isbin << endl;

	struct book  *b3;

	cout << " isbin: " << b3->isbin << endl;
	cout << sizeof(b2) << endl;
	cout << sizeof(b3) << endl;
}