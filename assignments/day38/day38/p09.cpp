#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	set<int> sets;
	string s = "";
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("book ") != string::npos)
		{
			if (slots.count(atoi(s.substr(5).c_str())) > 0)
				cout << "booked " << endl;
			else
			{
				slots.insert(atoi(s.substr(5).c_str()));
				cout << "Booked: " << s.substr(5) << endl;
			}
		}
		else if (s.find("check ") != string::npos)
		{
			if (slots.count(atoi(s.substr(6).c_str())) > 0)
				cout << "Already booked" << endl;
			else
				cout << "free" << endl;
		}
	}
	return 0;
}