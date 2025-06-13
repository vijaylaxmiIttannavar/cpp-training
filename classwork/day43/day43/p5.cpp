#include<iostream>
#include<deque>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;

int main()
{
	deque<char>dq = { 'a', 'b', 'c' };
	list<int>l = { 1, 2, 3 };


	auto itd = dq.begin();
	auto itl = l.begin();

	cout << itd[1] << endl;  //we can access random value using iterarotor in deque--- yes
	//cout << itl[1] << endl;  //we can't access rando value using iterarotor in list----no
}