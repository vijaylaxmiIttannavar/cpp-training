#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(sizeof(int) * 3);
	if (ptr != NULL)
	{
	int* temp = ptr;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;

	ptr = temp;
	for (int i = 0;i < 3;i++)
	{
		cout << *ptr++ << endl;
	}
	 
	//valgrid = memory leak so free
	free(temp);
	//free(temp);   stack smashing &  undefined
     }
	else
	{
		cout << "fail " << endl;
	}


}