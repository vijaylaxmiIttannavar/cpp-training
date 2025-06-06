#include<iostream>
#include<set>

using namespace std;

int main()
{
	string s =  "this is a bad example with evil words" ;
	set<string>word = { "bad", "evil", "vulger" };
	for ( string i : word)
	{
		auto pos = s.find(i);
		if (pos != string::npos)
			s.erase(pos, i.size() + 1);
	}

	cout << s;
}
