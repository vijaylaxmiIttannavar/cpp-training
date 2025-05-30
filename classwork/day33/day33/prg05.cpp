#include<iostream>
using namespace std;

class student
{                       //only virtual destroctor is thre no virtual constroctor
public:
    virtual void disp() = 0;    
    virtual ~student() {}   //virtual distructor is used cant loose reference of base class while pointing child class
};

class dept : public student
{
public:
    void disp() override 
    {
        cout << " ec branch"<<endl;
    }   
};

class cultural : public student
{
public:
    void disp() override
    {
        cout << " chess game " << endl;
    }
};

class lab : public student 
{
public:
    void disp() override 
    {
        cout << " engineering lab"<<endl;
    }
};

void render(student* s)
{
    s->disp();  // Polymorphic behavior
}

int main() 
{
    dept d;
    lab l;
    cultural c;
    render(&d);  //upcasting
    render(&l);
    render(&c);
}