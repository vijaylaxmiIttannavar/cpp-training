#include <iostream>
#include <cstring>
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

void add(PRD*);
void rmv(PRD*);
void upd(PRD*);
void src(PRD*);
void lst(PRD*);

int main() {
    PRD p[M];
    int ch = 0;
    do {
        cout << "\nSelect an option:\n";
        cout << "1. Add Product\n2. Remove Product\n3. Update Product\n4. Search Product\n5. List Products\n0. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch (ch) {
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
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid option!\n";
            break;
        }
    } while (ch != 0);
    return 0;
}

int i = 0;

void add(PRD* p) {
    if (i >= M) {
        cout << "Inventory full!" << endl;
        return;
    }
    cout << "Enter product ID: ";
    cin >> p[i].pid;
    cout << "Enter product Name: ";
    cin >> p[i].pname;
    cout << "Enter product Category: ";
    cin >> p[i].pcat;
    cout << "Enter product Type: ";
    cin >> p[i].ptyp;
    cout << "Enter product Quantity: ";
    cin >> p[i].pqty;

    cout << "Product added \n";
    i++;
}

void rmv(PRD* p) {
    int id;
    cout << "Enter product ID to rmv: ";
    cin >> id;

    bool found = false;
    for (int j = 0; j < i; j++) {
        if (p[j].pid == id) {
            found = true;

            for (int k = j; k < i - 1; k++) {
                p[k] = p[k + 1];
            }
            i--;
            cout << "Product removed \n";
            break;
        }
    }
    if (!found) {
        cout << "Product not found!\n";
    }
}

void upd(PRD* p) {
    int id, qty;
    cout << "Enter product Id to upd : ";
    cin >> id;

    for (int j = 0; j < i; j++) {
        if (p[j].pid == id) {
            cout << "Enter new quantity: ";
            cin >> qty;
            p[j].pqty = qty;
            cout << "Product updated success\n";
            return;
        }
    }
    cout << "Product not found!\n";
}

void src(PRD* p)
{
    int id;
    cout << "Enter product ID to srch : ";
    cin >> id;
    for (int j = 0; j < i; j++) {
        if (p[j].pid == id) {
            cout << "Product Found:\n";
            cout << "ID: " << p[j].pid << "\nName: " << p[j].pname << "\nCategory: " << p[j].pcat << "\nType: " << p[j].ptyp << "\nQuantity: " << p[j].pqty << endl;
            return;
        }
    }
    cout << "Product not found!\n";
}

void lst(PRD* p) {
    if (i == 0) {
        cout << "No products !\n";
        return;
    }
    cout << "\nProduct List:\n";
    for (int j = 0; j < i; j++) {
        cout << "ID: " << p[j].pid << ", Name: " << p[j].pname << ", Category: " << p[j].pcat << ", Type: " << p[j].ptyp << ", Quantity: " << p[j].pqty << endl;
    }
}

