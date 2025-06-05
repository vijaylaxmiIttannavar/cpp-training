/*
Converting all to lowercase
Sorting them
Removing duplicates

* i/p:
["Apple", "banana", "apple", "Orange", "BANANA", "grape"]
 Expected Output:
["apple", "banana", "grape", "orange"]
*/

#include<iostream>
#include <forward_list>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
     forward_list<string>ls = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

	 for (auto& i : ls)
	 {
		 transform(i.begin(), i.end(), i.begin(), ::tolower);
	 }
   
	ls.sort();
	ls.unique();

	for (const auto &i : ls)
		cout << i << ", ";
}