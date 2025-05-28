#include<iostream>
using namespace std;

class Vehicle
{
protected:
	string make;
	string model;
public:
	Vehicle(string mk, string md) : make(mk), model(md) {}
	void start()
	{
		cout << "Starting the "<<make<<" "<<model << endl;
	}
	void stop()
	{
		cout << "Stopping the  " << make << " " << model << endl;
	}
};

class Car : public Vehicle
{
protected:
	int numberOfDoors;
public:
	Car(string mk, string md, int d) : Vehicle(mk, md), numberOfDoors(d) {}
	void honk() 
	{
		
		cout << "Honking the horn of the "<< make <<" " << model << endl;
	}
};

int main()
{

	Car c1("generic", "vehicle", 4);
	c1.start();
	c1.stop();
	Car c("toyata", "carmy", 4);
	//c1.honk();
	c.start();
	c.honk();
	c.stop();

	

	return 0;
}