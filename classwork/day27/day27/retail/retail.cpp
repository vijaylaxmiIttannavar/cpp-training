#include<iostream>
#include"retail.h"
#include<cstring>
#define M  2
using namespace std;

void retail::setId(int ip)
{
	id = ip;
}
int retail:: getId()
{
	return id;
}
void retail::setName(char* np)
{
	strcpy(name, np);
}
char* retail::getName()
{
	return name;
}
void retail::setPrice(float pp)
{
	price = pp;
}
float retail::getPrice()
{
	return price;
}
void retail::setQuntity(int qp)
{
	quntity = qp;
}
int retail::getQuntity()
{
	return quntity;
}
///
int retail::additem(int id, int quntity, char *name, float price)
{
	for (int i = 0;i < M;i++)
	{
		cout << " product id :"; cin >> id;
		cout << " product name :"; cin >> name ;
		cout << " product price :"; cin >> price;
		cout << " product quntity : "; cin >> quntity;
	}
	return 0;
}
/*
int retail::deleteitem(int id, int quntity, char* name, float price)
{
{

}

int retail::uppdate(int id, int quntity, char* name, float price)
{
{

}
int retail::search(int id, int quntity, char* name, float price)
{
{

}*/
void retail::printbill(int id, int quntity, char* name, float price)
{
	cout << "id\tname\tqunity\tprice" << endl;
	cout << id << "\t";
	cout << name << "\t";
	cout << quntity << "\t";
	cout << price << "\t";
}
/*
float taxcalc(float price)
{



}
*/