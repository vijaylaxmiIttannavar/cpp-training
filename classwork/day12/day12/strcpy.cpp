#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char dest[50];
	char src[20] = "123456789012345678";
	strcpy(dest, src);

	printf("%S", dest);
	return 0;

	char s1[20] = "hi";
	char s2[20] = "hello";

	strcpy(s1, s2);

	printf("%s", s1);




}
