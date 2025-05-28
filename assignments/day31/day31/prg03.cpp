#include<iostream>
using namespace std;

class Vehicle
{
protected:
	string vehicleId;
	string type;
	int ratePerKm;
	int distance;
	int days;
	int t ;
	int d ;
	int f;
public:
	Vehicle(string vehicleId, string type, int ratePerKm)
	{
		this->vehicleId = vehicleId;
		this->type = type;
		this->ratePerKm = ratePerKm;
		this->distance = distance;
		this->days = days;
		 t = 0;
		 d = 0;
		cout << "Vehicle Type :" << vehicleId << endl;
		cout << "Vehicle ID :" << type << endl;
		cout << "Rate :" << ratePerKm << endl;		
	}

	int calculateFare(int distance)
	{
		cout << "Distance: " << distance << endl;
		f = distance * ratePerKm;
		return 0;		
	}

	int calculateFare(int distance, int days)
	{
		cout << "Days: " << days << endl;
		t = distance * ratePerKm;
		if (days > 2)
		d= (0.10 * t);
		return 0;
	}

	void fun()
	{
		cout << "Fare without discount: " << f << endl;
		cout << "Fare with long-term discount: " << t - d << endl;
	}
};

class Car :public Vehicle
{
public:
	Car(string vehicleId, string type, int ratePerKm) :Vehicle(vehicleId, type, ratePerKm) {}
};


class Bike : public Vehicle
{
	Bike(string vehicleId, string type, int ratePerKm) :Vehicle(vehicleId, type, ratePerKm) {}
};

int main()
{
	Car c("Car","C100", 15);
	c.calculateFare(100);
	c.calculateFare(100, 3);
	c.fun();

}