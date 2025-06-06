#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	multiset<int> scr;
	string s = "";
	int val;
	while (s != "exit")
	{
		getline(cin, s);
		if (s.find("add ") != 0)
		{
			cin >> val;
			scr.insert(val);
		}
		else if (s == "TOP3")
		{
			for (int i = 0; i < 3 ; ++i)
			{
			
					cout << val << " ";
					
				
			}
			cout << endl;
		}
		else if (s.find("COUNT ") == 0)
		{
			cout << scr.size();
		}
		else if (s.find("REMOVE ") == 0)
		{
			cin >> val;
			scr.erase(val);
		}
	}
}