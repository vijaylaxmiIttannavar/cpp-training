#include<iostream>
using namespace std;

struct date
{
	int day, mon, year;
};

typedef struct adress
{
	int hno;
	int pin;
	string adr1;    //mand
	string adr2;     //option
	string city;
	string state;
}ADR;

struct employee
{
	int id;
	string name;
	date j_date;
	ADR adrs;
};

/*                          //structure within structure its also allow 
struct employeee
{
	int id;
	string name;
	struct date
	{
		int day, adr, year;
	}D;
	ADR adrs;
};
*/

int main()
{
	struct employee e;

	e.id = 101;
	e.name = "vij";
	e.j_date.day = 10;
	e.j_date.mon = 4;
	e.j_date.year = 2025;

	e.adrs.hno = 12;
	e.adrs.pin = 600352;
	e.adrs.adr1 = "thoraipakkam";
	e.adrs.city = "chennai";
	e.adrs.state = "tn";

	cout << e.id << " " << e.name << " " << e.j_date.day << "/" << e.j_date.mon << "/" << e.j_date.year << endl;

	cout<< e.adrs.hno << " " <<e.adrs.pin << " " <<e.adrs.adr1 << " "<<e.adrs.city << " "<<e.adrs.state << endl;
}
