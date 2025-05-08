#include<iostream>
#include<cstring>
using namespace std;
int main()
{                                                  //using ASCII conversion method
	char str[50] = "1234";
	int sum = 0, i=0;
	for (i = 0;i < strlen(str);i++)
	{
		if (str[i]>=48 && str[i]<=57)
		{
			sum += str[i] -48 ;
		}
	}
	cout << sum<<endl;

}
/*
{
	char str[50] = "1234";                       //using   isdigit(str[i])    method
	int sum = 0, i = 0;
	for (i = 0;i < strlen(str);i++)
	{
		if (isdigit(str[i]))
		{
			sum += str[i] - 48;
		}
	}
	cout << sum << endl;

}*/