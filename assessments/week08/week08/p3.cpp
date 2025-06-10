#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<iomanip>

using namespace std;

enum assembly { MOV, ADD, SUB, MUL, DIV, HLT };

struct Data {
    string inst, address, AX, BX, CX, DX;
    int value;

    Data(string inst = "", string address = "", string AX = "0", string BX = "0", string CX = "0", string DX = "0", int value = 0)
        : inst(inst), address(address), AX(AX), BX(BX), CX(CX), DX(DX), value(value) {}
};

class Program_Counter {
public:
    ofstream logFile;
    Program_Counter(const string& filename) {
        logFile.open(filename, ios::app);
    }
    ~Program_Counter() {
        if (logFile.is_open())
            logFile.close();
    }
};

void move_operation(vector<Data>& d, string destination, string value) {
    for (auto& item : d) {
        if (destination == "AX") item.AX = value;
        else if (destination == "BX") item.BX = value;
        else if (destination == "CX") item.CX = value;
        else if (destination == "DX") item.DX = value;
    }
}

void arithmetic_operation(vector<Data>& d, string operation) {
    if (d.empty()) return;

    if (operation == "ADD")
        d[0].AX = to_string(stoi(d[0].AX) + stoi(d[0].BX));
    else if (operation == "SUB")
        d[0].AX = to_string(stoi(d[0].AX) - stoi(d[0].BX));
    else if (operation == "MUL")
        d[0].AX = to_string(stoi(d[0].AX) * stoi(d[0].BX));
    else if (operation == "DIV")
        d[0].AX = to_string(stoi(d[0].AX) / stoi(d[0].BX));
}

void stop(const vector<Data>& d) {
    if (d.empty()) return;

    cout << "Received Interrupt\nSnapshot of the processor:\n";
    cout << "AX: " << d[0].AX << "\nBX: " << d[0].BX << "\nCX: " << d[0].CX << "\nDX: " << d[0].DX << endl;
}

void print(const vector<Data>& d) {
    cout << "First 16 Memory Contents:\n";
    for (int i = 0; i < min(16, (int)d.size()); ++i)
        cout << "0" << i << ": " << d[i].AX << endl;
}

int main() {
    Program_Counter pc("instruction.txt");
    vector<Data> d;
    d.emplace_back("INIT", "0000", "10", "5", "3", "2", 0); // Initialize data

    ifstream file("instruction.txt");
    string action, reg, value;

    while (file >> action) {
        if (action == "MOV") {
            file >> reg >> value;
            move_operation(d, reg, value);
        }
        else if (action == "ADD" || action == "SUB" || action == "MUL" || action == "DIV") {
            arithmetic_operation(d, action);
        }
        else if (action == "HLT")
        {
            stop(d);
        }
    }

    print(d);
    return 0;
}
