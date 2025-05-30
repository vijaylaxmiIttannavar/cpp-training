#include<iostream>
using namespace std;

class animal      //pure abstract base class
{
public:
	virtual void eat()=0;
	virtual void walk() = 0;
	virtual void lifetime() = 0;

};

class cat : public animal
{
public:
	 void eat()
	 {
	 }
	 void walk()
	 {

	 }
	 void lifetime()
	 {
     }
};


int main()
{
	//animal a;
	cat c;
	

	return 0;
}