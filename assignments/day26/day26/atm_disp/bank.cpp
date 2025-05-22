#include<iostream>
#include<cstring>
#include"bank.h"

using namespace std;

void bank::setholder(char* ah)
{
	strcpy(acholder, ah);
}
char* bank::getholder()
{
	return acholder;
}
void bank::setbalance(int bk)
{
	balance = bk;
}
int bank::setbalance()
{
	return balance;
}
void bank::setd(int dp, int wt)
{
	depo = dp;
	with = wt;
}
int bank::getd()
{
	return depo;
	return with;
}

void bank::deposit(int dp)
{

	int d = balance + dp;
	cout << d << endl;
}

void bank::withdraw(int wt)
{

	int w = balance - wt;
	cout << w << endl;
}

void bank::checkbalance()
{
	cout << balance;
}

