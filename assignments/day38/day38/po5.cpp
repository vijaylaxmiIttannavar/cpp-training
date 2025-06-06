#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int>s;
	s.insert(101);
	s.insert(105);
	s.insert(101);
	s.insert(110);

	cout << s.size() << endl;

	for (auto& i : s)
		cout << i << " ";


}
