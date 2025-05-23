#include<iostream>
#include<cstring>
using namespace std;

class HotelRoom
{
private:
	int Room_Number;
	char Type[20];               //(AC / Non - AC)
	bool IsBooked;              //(boolean)
public:
	HotelRoom(int, const char*);
	bool bookRoom();
	void showStatus();
};

HotelRoom::HotelRoom(int r, const char* T)
{
	
	strcpy(Type, T);
	Room_Number = r;
}

bool HotelRoom:: bookRoom()
{
	if (Room_Number >= 1 && (Type == "AC" || Type == "Non - AC"))
		return true;
	else
		return false;
}

void HotelRoom::showStatus()
{
	//Room 201 (AC) is now booked.
	if (true)
		cout << "Room " << Room_Number<<" (" << Type <<") " << "is now booked.";
	else
		cout << "Room already booked."<<endl;

}

int main()
{
	HotelRoom h1(201, "AC");
	h1.bookRoom();
	h1.showStatus();
	return 0;
}