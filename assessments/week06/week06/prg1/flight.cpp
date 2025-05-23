#include<iostream>
#include<cstring>
using namespace std;

class Flight
{
private:
    char Flight_Number[20];
	int Total_Seats;
	int Booked_Seats;
public:
	Flight(const char*, int);
	int bookSeats(int);
	void showAvailability();
};

Flight::Flight(const char* f, int t)
{
	strcpy(Flight_Number, f);
	Total_Seats = t;	
}
int s = 0;

int Flight::bookSeats(int Booked_Seats)
{
    s = Total_Seats - Booked_Seats;
	return s;
}

void Flight::showAvailability()
{
                                                 //Flight: AI203 | Seats Available : 70
	if (s > 0)
	{
		cout << "Flight: " << Flight_Number << " | " << "Seats Available : " << s << endl;
	}
	else
	{
		cout << "Booking Failed : Not enough seats." << endl;
	}
	
}

int main()
{
	Flight f1("AI203", 100);
	f1.bookSeats(100);
	f1.showAvailability();
	return 0;
}