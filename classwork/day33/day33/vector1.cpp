#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> arr;
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);

	for (auto i : arr)
	cout << i << endl;         //print 10 20 30

	cout <<"element " << arr.at(1) << endl;

	cout << arr.capacity() << ", " << arr.size() << endl;
}
	
