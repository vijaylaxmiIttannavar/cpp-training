#include<iostream>
#include<cstring>
using namespace std;

class Luggage
{
	char Passenger_Name[20];
	int Weight;
	int Limit;
public:
	Luggage(const char*, int);
	int calculateTip();
	void printDetails();
};

Luggage::Luggage(const char* p, int w)
{
	Passenger_Name = p;
	Weight =w;
}
int Luggage::calculateTip()
{
	if (Weight <= 20)
		return 1;
	else

		return 0;
}
void  Luggage::printDetails()
{
	if(1)
	cout<< "Luggage within limit."
	else
		cout<<
}

int main()
{
	DeliveryTip d1("ORD1", 500, 3);
	d1.printDetails();
	return 0;
}