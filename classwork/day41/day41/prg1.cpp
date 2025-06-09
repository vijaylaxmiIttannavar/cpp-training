#include<iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException
{
	int val;
public :
	BadLengthException(int v)
	{
		val = v;
	}
	int what()
	{
		return val;
	}
};

bool check(string name) 
{
	bool Valid = true;
	int n = name.length();
	if (n < 5) 
	{
		throw BadLengthException(n);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (name[i] == 'w' && name[i + 1] == 'w')
		{
			Valid = false;
		}
	}
	return Valid;
}

int main() 
{
	int T;
	cin >> T;
	while (T--) 
	{
		string name;
		cin >> name;
		try 
		{
			bool Valid = check(name);
			if (Valid) 
			{
				cout << "Valid" << '\n';
			}
			else 
			{
				cout << "Invalid" << '\n';
			}
		}
		catch (BadLengthException e)
		{
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
