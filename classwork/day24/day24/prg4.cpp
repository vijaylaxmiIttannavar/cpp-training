#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

typedef struct employeee
{
	int id;
	char name[20];
	char desg[20];
}EMP;

int main()
{

	EMP* e1 = (EMP*)malloc(sizeof(EMP) * 3);
	EMP *temp = e1;

	cin >> e1->id >> e1->name >> e1->desg;
	e1++;
	cin >> e1->id >> e1->name >> e1->desg;
	e1++;
	cin >> e1->id >> e1->name >> e1->desg;
	e1 = temp;

	cout << e1->id << ", " << e1->name << ", " << e1->desg << ", " << endl;
	cout << e1->id << ", " << e1->name << ", " << e1->desg << ", " << endl;
	cout << e1->id << ", " << e1->name << ", " << e1->desg << ", " << endl;


}