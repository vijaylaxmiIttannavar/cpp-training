#include<iostream>
#include<cstring>
using namespace std;

class DeliveryTip
{
private:
	char Order_ID[20];
	int Bill_Amount;
	int Distance;            //(km)
	int	Tip;              //(calculated)
public:
	DeliveryTip(const char*, int, int);
	DeliveryTip(int);
	int calculateTip();
	void printDetails();
};

DeliveryTip::DeliveryTip(const char* o, int b, int d)
{
	strcpy(Order_ID, o);
	Bill_Amount = b;
	Distance = d;
}
DeliveryTip::DeliveryTip(int Tip)
{
	Tip = 0;
}
  // Tip = 0;
int T = 0;
int DeliveryTip::calculateTip()
{
	cout << Bill_Amount;
	/*< 5 km: 5 % of bill
		5 - 10 km : 10 %
	> 10 km: 15 %    */
	if (Distance < 5)
	{
		T= Bill_Amount*0.05;
		
	}
	else if (Distance >= 5 && Distance <= 10)
	{
		T= Bill_Amount * 0.10;
		//return Tip;
	}
	else if (Distance > 10)
	{
		 T =Bill_Amount * 0.15;
		// return Tip;
	}
	return T;
	cout << T;

}

//Order ORD1 | Tip: ?25
void DeliveryTip::printDetails()
{
	cout << "Order " << Order_ID << " | " << "Tip: $" << T << endl;
}

int main()
{
	DeliveryTip d1("ORD1", 500, 3);
	d1.printDetails();
	return 0;
}