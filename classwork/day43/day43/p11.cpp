#include<iostream>
#include<queue>
#include<string>
using namespace std;

class stud
{
private:
	int page;
	string name;
public:
	stud() : page(0), name("") {}
	stud(int page, string name) : page(page), name(name) {}
	void setname()
	{
		this->name = name;
	}
	string getname()
	{
		return name;
	}
	void setpage()
	{
		this->page = page;
	}
	int getpagee()
	{
		return page;
	}
};

int main()
{
	queue<stud>q;
	char str;
	int p;
	while (cin >> p && cin >> str)
	{
		if (p <= 10)
		{
			cout<< q.push({ p, str });
			
		}
		else if (p >= 11)
		{
			int r = p % 10;
			if(r>0)
			q.push({ r, str });
			cout << q.back();
			p = p / 10;
			while (p > 0)
			{
			 q.push({ p, str });
			 cout << q.back();
			 p--;
			}


		}
	}
}