#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int itr1=0, itr2=0; // iteration var

	char first_name[100] = { '\0', };  //to reduce garbage
	char s_n[100] = { '\0', };

	memset(first_name, '\0', sizeof(first_name));

	for (int itr2 = 0;itr2 < 10;itr2++)  
		cout << itr2 << endl;

	cout << itr2 << endl;
	
     strcat(s_n, "vij");
	 cout << s_n << endl;

	 register int i;
	 for (i = 0;i < 100;i++)
	 {
		 cout << i << endl;
	 }

	 bool flag = true;

	 cout << flag << endl;
	 flag = false;
	 cout << flag << endl;

	 {
		 int itr1 = 202;
		 cout << itr1 << endl;
		 cout << s_n;
		 cout << &itr1 << endl;
	 }

	 cout << itr1 << endl;
	 cout << &itr1 << endl;
}

/* here itr2 declared 2 times, intializing with 0, but it will not give error bcz it has scope*/