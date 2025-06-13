/*
STDIN           Function
-----           --------
3               n = 3
{[()]}          first s = '{[()]}'
{[(])}          second s = '{[(])}'
{{[[(())]]}}    third s ='{{[[(())]]}}'
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	string str;
	//map<char, char>m;
	map<char, char>m = { { '(', ')' }, { '[', ']' },  { '{', '}' } };
	
	int n;
	int s = str.length() - 1;
	cin >> n;
	for(int i=0;i<n;i++)
	cin >> str;

		while(n > 0) 
		{			
			for (int i = 0;i < s;i++)
			{
				//str[i] = str[s];
				for(auto j : m)
				{
					if (j.first == str[i] && j.second == str[s])
					{
						cout << "yes";
					}
					else
					{
						cout << "no";
					}
				}
				s--;
			}
			n--;
		}
		return 0;
}