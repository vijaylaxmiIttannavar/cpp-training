#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	istream_iterator<int>inIt(std::cin);   //begin input stream
	istream_iterator<int>endIt;            //end of iterator stream

	//vector<int>num(inIt, endIt);       //read untill EOF (ctrl+z) cintake values
	vector<int>num = { 1, 2, 3 };

	ostream_iterator<int> outIt(std::cout, " ");
	std::copy(num.begin(), num.end(), outIt);
	return 0;
}