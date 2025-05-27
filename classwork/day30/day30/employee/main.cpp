#include <iostream>

#include "employee.h"

using namespace std;

int main()
{
	Employee e;
	int id;
	char name[20];
	float sal;
	int ch = 1;
	int c = 0;
	
	while (ch)
	{
		//cout << "menu\n 1.add emp\n 2.disp emp detals\n 3.delet by id\n 4.search by name\n 5.update salary\n 6.count emp\n" ;
		//cout << "choice : ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			//cout << "enter emp details as id, name, salary : " << endl;
			cin >> id >> name >> sal;
			c++;
			e.Add_Employee(id, name, sal);
			
			break;
		case 2:
			e.Display_All_Employees(id);
			break;
		case 3:
			//cout << "enter id which empolyee u want to delete : ";
			cin >> id;
			c--;
			e.Delete_Employee_ID(id);
			break;
		case 4:
			//cout << "name : ";
				cin >> name;
			e.Search_Employee_Name(name);
			break;
		case 5:
			//cout << "enter id & new sal to update: " << endl;
			cin >> id;
			cin >> sal;
			e.Update_Salary_ID(id, sal);
			break;
		case 6:
			e.Count_Employees(c);  // ---------
			break;
		case 0:
			exit(0);
		}
		//ch = 6;
	}
	return 0;
}
