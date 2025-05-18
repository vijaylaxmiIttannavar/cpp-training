/* simple inventory management, menu-driven, add product, types categery, provide add/remove/update inventory, search and listing
*/

#include<iostream>
#include<cstring>
#define M 100

using namespace std;

typedef struct product
{
	int pid;
	char pname[50];
	char pcat[50];
	char ptyp[50];
	int pqty;
}PRD;

void add(PRD* );
void rmv(PRD* );
void upd(PRD* );
void src(PRD* );
void lst(PRD* );

int main()
{
	PRD p[M];
	int i = 0, ch=0;

	do {
		cout << "select option below\n" << endl;
		cout << "1.add prod\n 2.remove prod\n 3.update prod\n 4.seach prod\n 5.list product\n 0.exit\n" << endl;
		cout << " enter choice : " << endl;
		cin >> ch;
		switch(ch)
		{
		case 1:
			add(p);
			break;
		case 2:
			rmv(p);
			break;
		case 3:
			upd(p);
			break;
		case 4:
			src(p);
			break;
		case 5:
			lst(p);
			break;
		case 0:
			cout << "exit ";
			break;
		default:
			cout << "invalid opt";
			break;
		}
	} while (ch != 0);
}