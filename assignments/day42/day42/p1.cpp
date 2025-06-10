#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#define N 100;
using namespace std;


class Person
{
protected:
    int age;
    string name;
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    virtual ~Person() {}
};

class Professor : public Person
{
private:
    int cur_id;
    int publications;
    static int id;
public:
    Professor() {
        cur_id = ++id;
    }
    void getdata() override
    {
        cin >> name >> age;
        cin >> publications;
    }
    void putdata() override
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};
int Professor::id = 0;

class Student : public Person
{
protected:
    int mark[6];
    int cur_id;
    static int id;

public:
    Student()
    {
        cur_id = ++id;
    }
    void getdata() override
    {
        cin >> name >> age;
        for (int i = 0;i < 6;i++)
            cin >> mark[i];

    }
    void putdata() override
    {
        int s = 0;
        for (int i = 0;i < 6;i++) {
            s = s + mark[i];
        }
        cout << name << " " << age << " " << s << " " << cur_id << endl;
    }

};

int Student::id = 0;

int main() {

    int n, val;
    cin >> n; 
    Person* per[n];

    for (int i = 0;i < n;i++) {

        cin >> val;
        if (val == 1) {
           
            per[i] = new Professor;

        }
        else per[i] = new Student; 

        per[i]->getdata(); 

    }

    for (int i = 0;i < n;i++)
        per[i]->putdata(); 

    return 0;

}
