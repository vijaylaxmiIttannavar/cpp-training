#include<iostream>
#include<cstdlib>
using namespace std;

typedef struct emp
{
	int id;

}e;


struct emp
{
	int id;

};
typedef struct emp e   //valid 

struct udt
{
	int id;
	char name[20];

};                      //we can use multiple

struct book
{
	char tit[20];
	char author[20];
	int page[15];
	float price;
}b1, b2, b3;          //this means fixed number varaible 


int fun(struct udt u1)
{

}

int main()
{
	struct udt u1;
	
	fun(u1);

	fun(e);
}

