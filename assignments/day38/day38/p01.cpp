#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	list<string>l;
	string ch;
	string stmt;
	auto cur = l.begin();
	while (1)
	{
		cin >> ch;
		if (ch == "add")
		{
			cin >> stmt;
			cur = l.insert(cur, stmt);
			cur++;
		}
		else if (ch == "up")
		{
			if (cur != l.begin())
				cur--;
		}
		else if (ch == "down")
		{
			if (cur != l.end())
				cur++;
		}
		else if (ch == "print")
		{
			 for (const auto& i : l)
			 {
				 cout << i << endl;
			 }
		}
	}
}
