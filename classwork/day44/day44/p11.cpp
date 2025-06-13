#include<iostream>
#include<string>
#include<mutex>
#include<thread>

using namespace std;

mutex m;
class counter
{
protected:
	int x;
	string name;
public:
	counter() : x(0) {}

	void incr(const string name)
	{
		//m.lock();    
		lock_guard<mutex>lock(m);
		for (int i = 0;i < 5;i++)
		{
		    x = x + 2;
			cout << "the " <<name << i <<" : "<<x<< endl;
		}
		//m.unlock();
	}

    int getx()
	{
		return x;
	}
};

int main()
{
	counter c;
	thread t1(&counter::incr, &c, "increment");
	thread t2(&counter::incr, &c, "increment");

	t1.join();
	t2.join();
}