#include <iostream>
#include<string>
#define MAX 100
using namespace std;

typedef struct
{
	int _id;
	int usertype;
	string username;

}user;

void dispad(string);
void dispus();

int main()
{
	user u;
	cout << "enter id = ";
	cin >> u._id;
	cout << " enter user type = ";
	cin >> u.usertype;
	cout << " enter user name = ";
	cin >> u.username;

	if (u.usertype == 0)
	{
		dispad();
	}
	else
	{
		dispus(u.username);
	}

	cout << " appln end sucess" << endl;

}

void dispad(string username)
{
	cout << " able to acess admin" << endl;
}

void dispus()
{
	cout << " able to acess user " << endl;

}