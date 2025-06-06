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
	list<string>l = {
		"add PrepareReport",
		"add SubmitExpense",
		"urgent ClientCall",
		"remove SubmitExpense"
	};

	for (auto& i : l)
	{
		if (i == "add PrepareReport"|| i=="add SubmitExpense "|| i=="urgent ClientCall" || i=="add fixbug")
		{
			l.push_back("PrepareReport");
			l.push_back("SubmitExpense");
			l.push_back("clientcall");
			l.push_back("fixbug");
		}
		 else if(i== "remove SubmitExpense")
			l.remove("SubmitExpense");

		cout << i << endl;
	}

	

	//l.remove_if("urgent");
	//l.push_front("clientcall");

	
}