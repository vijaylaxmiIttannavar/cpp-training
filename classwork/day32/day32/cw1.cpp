/*A vehicle company is deciding to hire a programmer to develop a system that will allow the
company to enter the details of the vehicles sold by them. As a programmer, you need to
implement a program that contains a base class called Vehicles that contains a data
member to store the price of the vehicles. Derive two other classes named as Car and
Motorcycle.
• The Car class will contain data members to store details that include seating capacity,
number of doors and fuel type (diesel or petrol).
• The Motorcycle class will contain data members to store details such as the number
of cylinders, the number of gears and the number of wheels.
Derive another subclass named as Audi of Car and Yamaha of Motorcycle.
• The Audi class will contain a data member to store the model type.
• The Yamaha class will contain a data member to store the make – type.
Display the details of an Audi car (price, seating capacity, number of doors, fuel type, model
type) and the details of the Yamaha motorcycle (price, number of cylinders, number of
gears, number of wheels, make – type)*/

#include<iostream>
using namespace std;

class Vehicle
{
protected:
	int price;
public:
	Vehicle(int p): price(p){}
	void dispv()
		{
		cout << "price : " << price << endl;
		}
};


class Car : public Vehicle
{
protected:
	int seat;
	int door;
	string ftype;
public:
	Car(int p, int s, int d, string f): Vehicle(p), seat(s), door(d), ftype(f){}
	void dispc()
	{
		dispv();
		cout << "seat : " << seat << endl;
		cout << "door : " << door << endl;
		cout << "fuel : " << ftype << endl;
		
	}
};

class Motorcycle : public Vehicle
{
protected:
	int gear;
	int wheel;
	int cylinder;
public:
	Motorcycle(int p, int g, int w, int cy): Vehicle(p), gear(g), wheel(w), cylinder(cy){}
	void dispm()
	{
		dispv();
		cout << "gear : " << gear << endl;
		cout << "wheel : " << wheel << endl;
		cout << "cylimder : " << cylinder << endl;
	}
};

class Audi : public Car
{
private:
	string model;
public:
	Audi(int p, int s, int d, string f, string m ) : Car(p, s, d, f), model(m) {}
	void dispad()
	{
		dispc();
		cout << "model : " << model << endl;
		cout << "================" << endl;
	}
};
class Yamaha : public Motorcycle
{
private:
	string make;
public:
	Yamaha(int p, int g, int w, int cy, string mk) : Motorcycle(p, g, w, cy), make(mk) {}
	void dispy()
	{
		dispm();
		cout << "make : " << make << endl;
	}

};
int main()
{
	Audi a1(500000, 4, 4, "disel", "suv");
	Yamaha y1(200000, 4, 2, 1, "fiber");

	a1.dispad();
	y1.dispy();

	return 0;
}