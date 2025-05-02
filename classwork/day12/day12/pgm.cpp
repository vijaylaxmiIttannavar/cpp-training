#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[50], s2[50], s3[50];
	cin >> s1 >> s2;
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i] - 32)
		{
			s3[i]=s1[i];           //printf("%c", s1[i]);   
			s3[i]=s2[i];            //printf("%c", s2[i]); 
		}
		i++;		
	}

	s3[i] = s1[i];                       //printf("%c", s1[i]);
	s3[i] = s2[i];                         //printf("%c", s2[i]);
	
	while (s3[i] != '\0')
	{
		printf("%s", s3);
		i++;
	}

}