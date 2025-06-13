#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	istream_iterator<int>inIt(std::cin);   //begin input stream
	istream_iterator<int>endIt;            //end of iterator stream
	 
	vector<int>num(inIt, endIt);       //read untill EOF (ctrl+z) cintake values
	//vector<int>nu = { 1, 2, 3 };

	for (int n : num)
		cout << n << endl;

	return 0;
}