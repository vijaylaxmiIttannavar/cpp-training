#include<iostream>
using namespace std;
#define PI 3.142

void fun(int);
void squre(int);
void circle(int);
void rect(int, int);

int main(int argc, char *argv[])
{
	int x;
	cout << "choose what u want squre = 1, rect= 2, or circle = 3 " << endl;
	cin >> x;
	if (argc > 1)
		run(atoi(argv[1]);
	else
			run(-1);
	fun(x);
}

void fun (int x)
{
	if(x==-1)
      x=
	switch (x)
	{
	case 1:	
		int l;
		squre(10);
		break;
	case 2:
		int ra;
		circle(10);
		break;
	case 3:
		int b, h;
		rect(10, 20);
		break;
	}
}

void squre(int l)
{
	cout << "enter len value : " << endl;
	//cin >> l;
	cout << "area of square : " << l * l << endl;
}

void circle(int ra)
{
	cout << "enter rad value : " << endl;
	//cin >> ra;
	cout << "area of circle : " << PI * ra * ra << endl;
}

void rect(int b, int h)
{
	cout << "enter h & b value : " << endl;
	//cin >> b>>h;
	cout << "area of rectangle : " << b * h << endl;
}

