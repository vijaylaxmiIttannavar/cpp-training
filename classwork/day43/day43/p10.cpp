#include<iostream>
#include<stack>
#include<string>
using namespace std;

class pushing
{
public:
	string desc;
public:
	pushing(string desc) : desc(desc) {}
	
};

int main()
{
	stack<pushing>stk1;
	stack<pushing>stk2;
	string str;
	string str2;

	while (cin >> str)
	{
		if (str == "visit")
		{
			cin >> str;
			stk1.push(str);
			cout << stk1.top().desc;
		}
		else if (str == "back")
		{
			stk1.pop();
			stk2.push(str2) = stk1.top().desc;
			cout << stk1.top().desc;
		}
		else if (str == "forward")
		{
			cout<<stk2.top().desc;
			
		}
		
	}
	return 0;
}