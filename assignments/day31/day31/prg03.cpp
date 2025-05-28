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
public:

	Vehicle(string vehicleId, string type, int ratePerKm)
	{
		this->vehicleId = vehicleId;
		this->type = type;
		this->ratePerKm = ratePerKm;
		this->distance = distance;
		this->days = days;
	}

	
	void calculateFare(int distance)
	{
		cout << "Fare without discount: " << distance * ratePerKm << endl;
	}
	void calculateFare(int distance, int days)
	{
		int t = distance * ratePerKm;
		if (days > 2)
	
		cout << "Fare with long-term discount: " << t - (0.10 * t);
	}

	void disp()
	{
		cout << "Vehicle Type :" << vehicleId << endl;
		cout << "Vehicle ID :" << type << endl;
		cout << "Rate :" << ratePerKm << endl;
		cout << "Distance: " << distance << endl;
		cout << "Days: " << days << endl;
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
	c.disp();
	c.calculateFare(100);
	c.calculateFare(100, 3);
}