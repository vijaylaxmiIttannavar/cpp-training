#include<iostream>
#include<list>
#include<algorithm>
#include<string>

/*
add PrepareReport
add SubmitExpense
urgent ClientCall
add FixBug
remove SubmitExpense
show
ClientCall -> PrepareReport -> FixBug
*/

using namespace std;
int main()
{
	list<string>l;
	l.push_back("PrepareReport");
	l.push_back("SubmitExpense");
	l.push_back("clientcall");
	l.remove("SubmitExpense");
	l.push_back("fixbug");

	l.remove("clientcall");
	l.push_front("clientcall");
	
	for (auto& i : l)
		cout << i << "->";
	cout << endl;
	l.push_front("criticaldevelopment");
		for (auto& i : l)
			cout << i << "->";
}



	//l.remove_if("urgent");
	//l.push_front("clientcall");


