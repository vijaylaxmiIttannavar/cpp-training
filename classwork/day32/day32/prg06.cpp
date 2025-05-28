#include<iostream>     //heraricle
using namespace std;

class Animal
{
public:
	void eat() { cout << "eat "; }
	void walk() { cout << "walk "; }
	virtual void soundlike() { cout << "animal "; }
};

class Cat:public Animal
{
public:
	void dispc() { cout << "cat "; }
	void soundlike() { cout << "meow; "; }
};

class Dog :public Animal
{
public:
	void dispd() { cout << "dog "; }
	void soundlike() { cout << "bow; "<<endl; }
};

int main()
{
	Cat c;
	c.dispc();
	c.walk();
	c.eat();
	c.soundlike();
	cout << "-------" << endl;
	Dog d;
	d.dispd();
	d.walk();
	d.eat();
	d.soundlike();

	cout << "-------" << endl;
	Animal* base = nullptr;
	base = &c;
	base->soundlike();
	base->walk();


}