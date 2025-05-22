#pragma once
/*
Create a class ATMAccount with members balance, accountHolder. Provide functions deposit(), 
withdraw(), and checkBalance() which modify and show balance. Simulate interaction in main().
*/

class bank
{
private:
	char acholder[20];
	int balance;
	int depo;
	int with;
	//int with, int depo;

public:
	void setholder(char*);

	char* getholder();
	
	void setbalance(int);
	
	int setbalance();

	void setd(int, int);

	int getd();
void deposit(int);
void withdraw(int);
void checkbalance();

};