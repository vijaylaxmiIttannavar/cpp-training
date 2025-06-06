/*
All Scores (Sorted): 90 70 70 55 45
Top 3 Scores: 90 70 70
Unique Scores (Sorted): 90 70 55 45
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v;
	for (auto i : v)
	{
		cin >> i;
		v.emplace_back(v);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (auto i : v)
	{	
		if(i>0)
		cout << i<<" ";
	}
	
	int c = 0;
	cout << endl;
	cout << "top 3 score : " ;
	for (int i=0;i<3;i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	int i;
	for ( i = 0;i < v.size()-1;i++)
	{
		if (v[i] != v[i+1])
			cout << v[i] << " ";
	}
	
	if (v[i] != v[i-1])
		cout << v[i] << " ";

	

}