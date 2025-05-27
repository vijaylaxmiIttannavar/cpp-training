#pragma once
//print the bill from retail shop , add, edit, search, update, print

class retail
{
private:
	int id;
	char name[20];
	float price;
	int quntity;

public:
	void setId(int);
	int getId();
	void setName(char *);
	char* getName();
	void setPrice(float);
	float getPrice();
	void setQuntity(int);
	int getQuntity();

	int additem(int, int, char*, float);
	int deleteitem(int, int, char*, float);
	int uppdate(int, int, char*, float);
	int search(int, int, char*, float);
	void printbill(int, int, char*, float);

private:
	float taxcalc(float price);
};
