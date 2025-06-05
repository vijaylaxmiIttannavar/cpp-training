#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	deque<string>d;

	int c = 4;
	d.push_back("mkdir test");
	d.push_back("cd test");
	d.push_back("touch file.txt");
	d.push_back("cat file.txt");
	d.push_back("history");

	if (c == d.size())
	{
		
	}
	else
	{
		d.pop_front();
	}

	for (const auto& i : d)
		cout << i << endl;
}