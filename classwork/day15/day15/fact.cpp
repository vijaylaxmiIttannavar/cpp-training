#include<iostream>
using namespace std;

/*                         // using fun
int fun(int n){
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fun(n - 1);
}

int main(){
	int n;
	cin >> n;
	cout << "fact : " << fun(n);
}
*/

int main()
{
	int n;
	cin >> n;
	int prod = 1;
	while(n >= 1)
	{
		prod = prod * n;
		n--;
	}
	cout << "fact : " << prod;
}