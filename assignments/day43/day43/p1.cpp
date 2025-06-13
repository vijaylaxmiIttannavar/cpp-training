/*
visit google.com
visit stackoverflow.com
back
visit github.com
back
forward
forward
------------------
Current page: google.com
Current page: stackoverflow.com
Current page: google.com
Current page: github.com
Current page: google.com
Current page: github.com
Current page: github.com
*/


#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

/*
class pushing
{
public:
	string desc;
public:
	pushing(string desc) : desc(desc) {}

};*/

void disp(stack<string>stk1)
{
	cout << stk1.top();
}

int main()
{
	string desc;
	stack<string>stk1;
	stack<string>stk2;
	string ch;
	
	
	while (ch!= "q")
	{
		getline(cin, desc);
		stringstream ss(desc);
		ss >> ch;
		if (ch == "visit")
		{
			if (!(ss >> ch))
				continue;
			{
				ss >> ch;
				stk1.push(ch);
				 stk1.top();
				 return true;
			}
		}
		else if (ch == "back")
		{
			ss >> ch;
			stk2.push(stk1.top());
			 stk1.top();
			 return true;
		}
		else if (ch == "forward")
		{
			ss >> ch;
		 stk1.push(stk1.top());
		 stk2.pop();
		 return true;

		}

	}
	disp(stk1);
	return 0;
}