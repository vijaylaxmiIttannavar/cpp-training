#include<cstdio>

int main()
{
	printf("hello world\n");
	int a = 10;
	float b = 15.5;
	char c = 'A';
	double d = 101.111;
	char s[50];

	printf("\n%d \n%f \n%c \n%lf \n%s \n", a, b, c, d, "vij");
	//fflush(stdin);
	scanf("%d %f %lf %s", &a, &b, &d, s);
	scanf(" ");
	scanf(" %c", &c);

	printf("\n%d \n%f \n%c \n%lf \n%s\n", a, b, c, d, s);
	return 0;
}