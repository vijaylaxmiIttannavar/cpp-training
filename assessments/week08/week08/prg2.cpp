#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<list>

using namespace std;

enum assembly   //enum declaration for operation instruction
{ 
    MOV,
    ADD, 
    SUB, 
    MUL, 
    DIV,
    HLT 
};

struct Data     //for data
{
    string inst, address;
    string AX, BX, CX, DX;
    int value;

    Data(string inst, string address, string AX, string BX, string CX, string DX, int value)
        : inst(inst), address(address), AX(AX), BX(BX), CX(CX), DX(DX), value(value) {}
};

class Program_Counter
{
public:
    ofstream logFile;
    Program_Counter()     //memeory
    {
        int mem = { 65536 };
    }
    Program_Counter(const string& filename)    //file handling
    {
        logFile.open(filename, ios::app);   
    }
    ~Program_Counter() 
    {
        if (logFile.is_open())
            logFile.close();
    }
};

void move_operation(vector<Data>& d)
{
    ifstream file("instruction.txt");
    string ip;
    for (auto& item : d) 
    {
        if (ip == item.address && ip == to_string(item.value))
            item.address = to_string(item.value);
        else if (ip == item.AX && ip == to_string(item.value))
            item.AX = to_string(item.value);
       // cout << "-" << item.address << ", " << item.AX <<item.value<< endl;
    }   
    //file.close();
}

void arithmetic_operation(vector<Data>& d)  // const string& filename) 
{
    ifstream file("instruction.txt");
    string str;

    while (file >> str) 
    {
        if (str == "ADD")
            d[0].AX = to_string(stoi(d[0].AX) + stoi(d[0].BX));
        else if (str == "SUB")
            d[0].AX = to_string(stoi(d[0].AX) - stoi(d[0].BX));
        else if (str == "MUL")
            d[0].AX = to_string(stoi(d[0].AX) * stoi(d[0].BX));
        else if (str == "DIV")
            d[0].AX = to_string(stoi(d[0].AX) / stoi(d[0].BX));
       // cout << d[0].AX;
    }
   // file.close();
    //cout << d[0].AX;
}

void stop(const vector<Data>& d)
{
    cout << "Received Interrupt " << endl;
    cout << "Snapshot of the processor  " << endl;
    cout << "AX: " << d[0].AX << endl;
    cout << "BX: " << d[0].BX << endl;
    cout << "CX: " << d[0].CX << endl;
    cout << "DX: " << d[0].DX << endl;
}

void print(const vector<Data>& d) 
{
    cout << "First 16 Memory Contents " << endl;
    for (int i = 0; i < min(16, (int)d.size()); ++i)
        cout << "0" << i << ": " << d[i].AX << endl;
}

int main()
{
    //Program_Counter p();
    Program_Counter pc("instruction.txt");
    vector<Data> d;
    ifstream iss("instruction.txt");
    string action;

    while (iss >> action) {
        if (action == "MOV")
        {
           move_operation(d);
        }
        else if (action == "ADD" || action == "SUB" || action == "MUL" || action == "DIV")
        {
            arithmetic_operation(d);
        }
        else if (action == "HLT")
        {
            stop(d);
        }
    }
    print(d);
    return 0;
}
