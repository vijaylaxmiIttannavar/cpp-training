#include<cstdio>
int main()
{
	int  sno;
	int id;
	char s[50];
	int m1, m2, m3;
	float avg;
	

	printf(" slno | id | name | m1 | m2| m3 | avg\n");
	scanf(" %d %d %s %d %d %d %f", &sno, &id, s, &m1, &m2, &m3, &avg);
	scanf(" ");
	scanf("%d", &id);
    printf("\n");

	printf(" id | %d  | %s  | %d  | %d  | %d | %f%|\n");
	printf("\n");
	if (id == 2)
	{
		printf(" %d | %d  | %s  | %d  | %d  | %d | %f%|\n", sno, id, s, m1, m2, m3, avg);
	}
}