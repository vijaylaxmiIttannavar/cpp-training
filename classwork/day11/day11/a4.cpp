#ifdef __INTELLISENSE__
  pragma constexpr
#endif

#include<iostream>
using namespace std;
int main()
{
	int arr[] = {11, 13, 12, 15, 8, 6, 4, 3, 7, 1};
	int i;
	constexpr int n = sizeof(arr) / sizeof(arr[0]);  //compiled in compile time
		cout << n<<endl;

	/*for (i = 0;i < 10;i++)
	{
		arr[i] = i + 1;
	}*/
	
	for (i = 0;i < n;i++)
	{
		if(arr[i] % 2 != 0)
		cout << arr[i]<<" ";
	}
	for (i = 0;i < n;i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i]<<" ";
	}
}

