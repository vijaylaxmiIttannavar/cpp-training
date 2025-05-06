#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[50] = "this is cpp programming class";
	char ch = 'p';
	unsigned long int bas = 0, bar = 0;
	cout << "base address = " << (unsigned long int)str << endl;
	bas = (unsigned long int)str;
	char* res = strchr(str, ch);
	if (res != nullptr) {
		cout << "\t" << res << endl;
		cout << "base address = " << (unsigned long int)str << endl;
		bar = (unsigned long int)str;
	}
	else
		cout << "not found" << endl;  
	                                          //////////////////////////////////
	 
	unsigned long int r2 = bar - bas;                
	char str2[] = "is";
	char* res2 = strstr(str, str2);
	if (res != nullptr)
		 cout << "\t" << res2 << endl;
	else
		cout << "not found" << endl;
}
