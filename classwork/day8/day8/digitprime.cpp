#include<iostream>
using namespace std;

int fun(int);            

int main()
{
	int n;
	cin >> n;
	
	if (digit(n))
	{
		cout < "counted " << endl;
	}
	else
		cout < "not counted " << endl;

}

int fun(int n)
{
	int i, j;
	int count = 0;  
	
		for (j = 1; ;j++)
		{
			count = 0;
			if (j < 10) 
			{
				for (i = i; ;i++)
				{
					if (j % i == 0)
					{
						count++;
						break;

					}
				}
			}

			if (j > 10)
			{
				digit(j);

			}
			
	    if(count==n)
		cout << count << endl;
}


int digit(int j)
{
	int d = 0, s = 0;
	int  cd = 0;
	int cp = 0;
	while (j)
	{
		d = j % 10;
		cout << "s = " << endl;
		if (fun(d) == 0)
		{
			cout << "prime" << endl;
			cp++;
		}

		j = j / 10;
		cd++;
	}
	cout << cd << endl;
	cout << cp << endl;

	if (cp == cd)
		return 1;
	else
		return 0;
}
