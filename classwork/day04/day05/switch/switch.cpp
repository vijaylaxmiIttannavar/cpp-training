#include<iostream>
using namespace std;

enum genre {
	action=1,
	comedy,
	thriller,
	mystery
};

enum language {
	kan,
	hindi,
	english
};

int main()
{
	int ilang;
	cout << "enter lang = " << endl;
	cin >> ilang;
	switch (olang)
	{
	case english :
		cout << " chhose english " << endl;
		cout << "enter genre " << endl;
		cin >> igenre;

		switch (igenre)
		{
		case action:
			cout << "choosed genre action" << endl;
			break;
		case comedy:
			cout << "choosed genre comedy" << endl;
			break;
		case thriller:
			cout << "choosed genre thriller" << endl;
			break;
		case mystery:
			cout << "choosed genre  mystery" << endl;
			break;
		default:
			cout << "no selected" << endl;
			break;
		}

	default:
		cout<<"none"<<endl
	}
	int igenre;
	
}