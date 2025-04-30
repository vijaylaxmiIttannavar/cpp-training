#include<iostream>
using namespace std;
int main()
{
	int arr[3] = {101, 201, 333};
	cout << "arr[0]= " << arr[0] << endl;
	cout << "arr[1]= " << arr[1] << endl;
	cout << "arr[2]= " << arr[2] << endl;
	cout << "arr[3]= " << arr[3] << endl;   //out of array give garbage

	for (int i = 0;i < 3;i++)
	{
		cout << "arr["<< i <<"]= " << arr[i] << endl;
	}
	arr[0] = 222;
	cout<< "arr[0]= " << arr[0] << endl;  //we can update explicity or change
}
