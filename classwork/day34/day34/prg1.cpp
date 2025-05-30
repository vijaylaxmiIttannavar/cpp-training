#include<iostream>
#include<fstream>

using namespace std;

struct Employee
{
	int id;
	char name[20];
};

int main()
{
	fstream fIO;
	struct Employee e = { 101, "vij" };
	fIO.open("test1.txt", ios::in | ios::out | ios::binary);

	if (!fIO.is_open())
	{
		cerr << "error : opening in the file" << endl;

	}
	fIO.write((char*)&e, sizeof(e));
	fIO.close();

	struct Employee e1;
	fIO.read((char*)& e1, sizeof(e1));
	cout << e1.id << " --- " << e1.name << endl;
	fIO.close();
	return 0;
}