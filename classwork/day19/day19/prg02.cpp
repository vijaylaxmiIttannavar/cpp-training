#include<iostream>
using namespace std;
int main()
{
	char line[] = "This is a cpp class";
	for (int i = 0;i < strlen(line);i++)
		cout << line[i];
	cout << endl;

	char* ptr = nullptr;
	ptr = line;

	while (*ptr != '\0')
	{
		cout << *ptr;
		ptr++;
	}
}