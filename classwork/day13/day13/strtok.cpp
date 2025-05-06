#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[] = "1011,vijaya,8888";
	char delimit = ',';
	char* res = nullptr;

	res = strtok(str, delimit);
	cout << res << endl;

	res = strtok(NULL, delimit); //why null means to get second word & clear buf
	cout << res << endl;

	res = strtok(NULL, delimit);
	cout << res << endl;

	return 0;
}