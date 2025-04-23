#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << argc << endl;
	cout << "argv[0]= " << argv[0] << endl;
	cout << "argv[1]= " << argv[1] << endl;
	cout << "argv[2]= " << argv[2] << endl;
	cout << "argv[3]= " << argv[3] << endl;
	/*int res = atoi(argv[1]) + atoi(argv[2]);
	cout << "res " << res << endl;*/

	/*int a = argv[1] + argv[2];
	int s = argv[1] - argv[2];
	int m = argv[1] * argv[2];
	int d = argv[1] % argv[2];
	cout << a < s << m << d << endl; */

	cout << "1st char=" << argv[1][0] << endl;
	cout << "2st char=" << argv[1][1] << endl;
	int res = 0;
	switch(argv[1][0])
		{
	case '+':
		res = atoi(argv[2]) + atoi(argv[3]);
		cout << res << endl;
		break;
	case '-':
		res = atoi(argv[2]) - atoi(argv[3]);
		cout << res << endl;
		break;

		}
}