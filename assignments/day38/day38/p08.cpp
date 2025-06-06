#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	set<string> str = { "apple", "application", "banana", "apply", "ball" };
	string s= "app";
	//getline(cin, s);
	auto i = str.lower_bound(s);
	while (i != str.end() && (*i).substr(0, s.size()) == s)
	{
		cout << *i << " ";
		advance(i, 1);  //advance option
	}
	cout << endl;
	return 0;
}