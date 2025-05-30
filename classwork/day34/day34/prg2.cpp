#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int id;
    char name[30];
};

int main() {
    Student s1 = { 1, "Alice" };

    // Write binary data
    ofstream out("student.txt", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    /*
    Student s2;
    ifstream in("student.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));
    in.close();

    cout << "ID: " << s2.id << ", Name: " << s2.name << endl; */

    return 0;
}