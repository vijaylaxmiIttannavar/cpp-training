#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
	set<string>l;
	string ch;
	string stmt;
	
	while (1)
	{
		cin >> ch;
		if (ch == "add")
		{
			cin >> stmt;
			l.insert(stmt);
		}
		else if (ch == "remove")
		{
			l.erase(stmt);
			cout << "removed" << endl;
		}

		else if (ch == "minmax")
		{
		 auto max = l.begin();
		 cout << *(max);
		 auto min = l.end();
		 cout << *(min);		
		}
		if (0)
			exit;
		
	}
}
