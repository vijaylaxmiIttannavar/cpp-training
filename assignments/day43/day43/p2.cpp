#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct stud
{
public:
	int page;
	string name;
};

int main()
{
	queue<stud>q;
	char str;
	int p;

	q.push( "Alice", 10 );
	q.push("Bob ", 8);
	q.push("Charlie", 23);
	
		if (q.page <= 10)
		{
			q.top();
		}
		else if (q.page >= 11)
		{
			int r = p % 10;
			if (r > 0)
			cout << q.back();
			p = p / 10;
			while (q.page > 0)
			{
				q.push();
				cout << q.back();
				p--;
			}
		}
}